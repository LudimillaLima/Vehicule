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
double VeiculoTerrestre::getVelocidadeMaxima(){
    return velocidademaxima;
}
void VeiculoTerrestre::setVelocidadeMaxima(double vm){
    velocidademaxima=vm;
}




VeiculoAereo::VeiculoAereo(string n, double p, int a, double vm):Veiculo(n,p,a),velocidademaxima(vm){

}
VeiculoAereo::VeiculoAereo():VeiculoAereo("DESCONHECIDO",0.0,0,0.0){

}
double VeiculoAereo::getVelocidadeMaxima(){
    return velocidademaxima;
}
void VeiculoAereo::setVelocidadeMaxima(double vm){
    velocidademaxima=vm;
}



Carro::Carro(string n, double p, int a, double vm, int np, estado est):VeiculoTerrestre(n,p,a,vm),numportas(np),e(est){

}
Carro::Carro():Carro("DESCONHECIDO",0.0,0,0.0,0,estado::DESCONHECIDO){

}
int Carro::getNumportas(){
    return numportas;
}
void Carro::setNumportas(int np){
    numportas=np;
}
Carro::estado Carro::getE(){
    return e;
}
void Carro::setE(Carro::estado est){
    e=est;
}




Moto::Moto(string n, double p, int a, double vm, int nr, estado est):VeiculoTerrestre(n,p,a,vm),numrodas(nr),e(est){

}
Moto::Moto():Moto("DESCONHECIDO",0.0,0,0.0,0,estado::DESCONHECIDO){

}
int Moto::getNumrodas(){
    return numrodas;
}
void Moto::setNumrodas(int nr){
    numrodas=nr;
}
Moto::estado Moto::getE(){
    return e;
}
void Moto::setE(Moto::estado est){
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
Aviao::estado Aviao::getE(){
    return e;
}
void Aviao::setE(Aviao::estado est){
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
CarroVoador::estado CarroVoador::getE(){
    return e;
}
void CarroVoador::setE(CarroVoador::estado est){
    e=est;
}