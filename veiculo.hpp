#ifndef cpp_veiculo
#define cpp_veiculo
#include <iostream>


using namespace std;

class Veiculo{
    protected:
    string nome;
    double preco;
    int ano;
    public:
    Veiculo(string, double, int);
    Veiculo();
    void setNome(string);
    void setPreco(double);
    void setAno(int);
    string getNome();
    double getPreco();
    int getAno();
};

class VeiculoTerrestre: public Veiculo{
    private:
    double velocidademaxima;
    public:
    VeiculoTerrestre(string, double, int, double);
    VeiculoTerrestre();
    double getVelocidadeMaxima();
    void setVelocidadeMaxima(double);
};

class VeiculoAereo: public Veiculo{
    private:
    double velocidademaxima;
    public:
    VeiculoAereo(string, double, int, double);
    VeiculoAereo();
    double getVelocidadeMaxima();
    void setVelocidadeMaxima(double);
};


class Carro:public VeiculoTerrestre{
    public:
    enum estado{NOVO, 
        USADO, 
        QUEBRADO,
        DESCONHECIDO
    };
    Carro(string, double, int, double, int, Carro::estado);
    Carro();
    int getNumportas();
    void setNumportas(int);
    estado getE();
    void setE(Carro::estado);

    protected:
    int numportas;
    estado e;
};

class Moto:public VeiculoTerrestre{
    public:
    enum estado{NOVO, 
        USADO, 
        QUEBRADO,
        DESCONHECIDO
    };
    Moto(string, double, int, double, int, Moto::estado);
    Moto();
    int getNumrodas();
    void setNumrodas(int);
    estado getE();
    void setE(Moto::estado);

    protected:
    int numrodas;
    estado e;
};

class Aviao:public VeiculoAereo{
    public:
    enum estado{NOVO, 
        USADO, 
        QUEBRADO,
        DESCONHECIDO
    };
    Aviao(string, double, int, double, int, Aviao::estado);
    Aviao();
    estado getE();
    void setE(Aviao::estado);
    int getNumpassageiros();
    void setNumpassageiros(int);

    protected:
    int numpassageiros;
    estado e;
};



class CarroVoador: public VeiculoAereo, public VeiculoTerrestre{
    public:
    enum estado{NOVO, 
        USADO, 
        QUEBRADO,
        DESCONHECIDO
    };
    CarroVoador(string, double, int, double, int, CarroVoador::estado);
    CarroVoador();
    estado getE();
    void setE(CarroVoador::estado);
    int getNumasas();
    void setNumasas(int);

    protected:
    int numasas;
    estado e;
};
#endif