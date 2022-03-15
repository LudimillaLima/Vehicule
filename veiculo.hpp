#ifndef cpp_veiculo
#define cpp_veiculo
#include <iostream>


using namespace std;
enum class estado{NOVO, 
        USADO, 
        QUEBRADO,
        DESCONHECIDO
};
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
    double getVelocidadeMaxima() const;
    void setVelocidadeMaxima(double);
};

class VeiculoAereo: public Veiculo{
    private:
    double velocidademaxima;
    public:
    VeiculoAereo(string, double, int, double);
    VeiculoAereo();
    double getVelocidadeMaxima() const;
    void setVelocidadeMaxima(double);
};


class Carro:public VeiculoTerrestre{
    public:
    // enum estado{NOVO, 
    //     USADO, 
    //     QUEBRADO,
    //     DESCONHECIDO
    // };
    Carro(string, double, int, double, int, estado);
    Carro(const Carro &);
    Carro();
    static Carro CARRODOIDOSTATIC;
    friend ostream& operator<<(ostream&, const Carro &);
    Carro& operator=(const Carro&); 
    int getNumportas();
    void setNumportas(int);
    estado getE();
    void setE(estado);

    protected:
    int numportas;
    estado e;
};

extern Carro CARRODOIDO;

class Moto:public VeiculoTerrestre{
    public:
    // enum estado{NOVO, 
    //     USADO, 
    //     QUEBRADO,
    //     DESCONHECIDO
    // };
    Moto(string, double, int, double, int, estado);
    Moto();
    Moto(const Moto &);
    friend ostream& operator<<(ostream&, const Moto &);
    Moto& operator=(const Moto&);
    int getNumrodas();
    void setNumrodas(int);
    estado getE();
    void setE(estado);

    protected:
    int numrodas;
    estado e;
};

class Aviao:public VeiculoAereo{
    public:
    // enum estado{NOVO, 
    //     USADO, 
    //     QUEBRADO,
    //     DESCONHECIDO
    // };
    Aviao(string, double, int, double, int, estado);
    Aviao();
    estado getE();
    void setE(estado);
    int getNumpassageiros();
    void setNumpassageiros(int);

    protected:
    int numpassageiros;
    estado e;
};



class CarroVoador: public VeiculoAereo, public VeiculoTerrestre{
    public:
    // enum estado{NOVO, 
    //     USADO, 
    //     QUEBRADO,
    //     DESCONHECIDO
    // };
    CarroVoador(string, double, int, double, int, estado);
    CarroVoador();
    estado getE();
    void setE(estado);
    int getNumasas();
    void setNumasas(int);

    protected:
    int numasas;
    estado e;
};
#endif