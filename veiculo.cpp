#include <iostream>
#include "veiculo.hpp"

using namespace std;

Veiculo::Veiculo(string n, double p, int a):nome(n),preco(p),ano(a){

}
Veiculo::Veiculo():Veiculo("DESCONHECIDO",0.0,0){

}
void Veiculo::setNome(string n){
    nome=n;
}
void Veiculo::setPreco(double p){
    preco=p;
}
void Veiculo::setAno(int a){
    ano=a;
}
string Veiculo::getNome(){
    return nome;
}
double Veiculo::getPreco(){
    return preco;
}
int Veiculo::getAno(){
    return ano;
}




VeiculoTerrestre::VeiculoTerrestre(string n, double p, int a, double vm):Veiculo(n,p,a),velocidademaxima(vm){

}
VeiculoTerrestre::VeiculoTerrestre():VeiculoTerrestre("DESCONHECIDO",0.0,0,0.0){

}
double VeiculoTerrestre::getVelocidadeMaxima() const{
    return velocidademaxima;
}
void VeiculoTerrestre::setVelocidadeMaxima(double vm){
    velocidademaxima=vm;
}




VeiculoAereo::VeiculoAereo(string n, double p, int a, double vm):Veiculo(n,p,a),velocidademaxima(vm){

}
VeiculoAereo::VeiculoAereo():VeiculoAereo("DESCONHECIDO",0.0,0,0.0){

}
double VeiculoAereo::getVelocidadeMaxima() const{
    return velocidademaxima;
}
void VeiculoAereo::setVelocidadeMaxima(double vm){
    velocidademaxima=vm;
}


Carro Carro::CARRODOIDOSTATIC;
Carro CARRODOIDO;
Carro::Carro(string n, double p, int a, double vm, int np, estado est):VeiculoTerrestre(n,p,a,vm),numportas(np),e(est){

}
Carro::Carro(const Carro & c){
    this->setNome(c.nome);
    this->setPreco(c.preco);
    this->setAno(c.ano);
    this->setVelocidadeMaxima(c.getVelocidadeMaxima());
    this->setNumportas(c.numportas);
    this->setE(c.e);
}
ostream& operator<<(ostream& o, const Carro & c){

    string estado;
    if(c.e == estado::NOVO){
        estado =  "NOVO";
    }
    if(c.e == estado::USADO){
        estado="USADO";
    }
    if(c.e == estado::QUEBRADO){
        estado =  "QUEBRADO";
    }
    if(c.e == estado::DESCONHECIDO){
        estado =  "DESCONHECIDO";
    }


    o <<c.nome<< " - " << c.preco<< " - "<<c.ano << " - " << c.numportas << " - "<<c.getVelocidadeMaxima()<<" - "<<estado<<endl;
    return o;
}
Carro& Carro::operator=(const Carro& c){
    if(&c!=this){
    this->setNome(c.nome);
    this->setPreco(c.preco);
    this->setAno(c.ano);
    this->setVelocidadeMaxima(c.getVelocidadeMaxima());
    this->setNumportas(c.numportas);
    this->setE(c.e);
    }
    return *this;
}

Carro::Carro():Carro("DESCONHECIDO",0.0,0,0.0,0,estado::DESCONHECIDO){

}
int Carro::getNumportas(){
    return numportas;
}
void Carro::setNumportas(int np){
    numportas=np;
}
estado Carro::getE(){
    return e;
}
void Carro::setE(estado est){
    e=est;
}




Moto::Moto(string n, double p, int a, double vm, int nr, estado est):VeiculoTerrestre(n,p,a,vm),numrodas(nr),e(est){

}
Moto::Moto():Moto("DESCONHECIDO",0.0,0,0.0,0,estado::DESCONHECIDO){

}
Moto::Moto(const Moto & m){
    this->setNome(m.nome);
    this->setPreco(m.preco);
    this->setAno(m.ano);
    this->setVelocidadeMaxima(m.getVelocidadeMaxima());
    this->setNumrodas(m.numrodas);
    this->setE(m.e);
}
ostream& operator<<(ostream& o , const Moto & m){
    string estado;
    if (m.e == estado::NOVO){
        estado= "NOVO";
    }
    if (m.e == estado::USADO){
        estado= "USADO";
    }
    if (m.e == estado::QUEBRADO){
        estado= "QUEBRADO";
    }
    if (m.e == estado::DESCONHECIDO){
        estado= "DESCONHECIDO";
    }
    o<<m.nome<< " - " << m.preco<< " - "<<m.ano << " - " <<m.getVelocidadeMaxima()<< " - "<< m.numrodas <<" - "<<estado<<endl;
    return o;
}
Moto& Moto::operator=(const Moto& m){
    if(&m!=this){
    this->setNome(m.nome);
    this->setPreco(m.preco);
    this->setAno(m.ano);
    this->setVelocidadeMaxima(m.getVelocidadeMaxima());
    this->setNumrodas(m.numrodas);
    this->setE(m.e);
    }
    return *this;
}
int Moto::getNumrodas(){
    return numrodas;
}
void Moto::setNumrodas(int nr){
    numrodas=nr;
}
estado Moto::getE(){
    return e;
}
void Moto::setE(estado est){
    e=est;
}




Aviao::Aviao(string n, double p, int a, double vm, int np, estado est):VeiculoAereo(n,p,a,vm),numpassageiros(np),e(est){

}
Aviao::Aviao():Aviao("DESCONHECIDO",0.0,0,0.0,0,estado::DESCONHECIDO){

}
int Aviao::getNumpassageiros(){
    return numpassageiros;
}
void Aviao::setNumpassageiros(int np){
    numpassageiros=np;
}
estado Aviao::getE(){
    return e;
}
void Aviao::setE(estado est){
    e=est;
}




CarroVoador::CarroVoador(string n, double p, int a, double vm, int na, estado est):VeiculoAereo(n,p,a,vm),VeiculoTerrestre(n,p,a,vm), numasas(na),e(est){

}
CarroVoador::CarroVoador():CarroVoador("DESCONHECIDO",0.0,0,0.0,0,estado::DESCONHECIDO){

}
int CarroVoador::getNumasas(){
    return numasas;
}
void CarroVoador::setNumasas(int na){
    numasas=na;
}
estado CarroVoador::getE(){
    return e;
}
void CarroVoador::setE(estado est){
    e=est;
}