#include <sstream>
#include <cstring>
#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "veiculo.hpp"

TEST_CASE("Veiculo") {
    Veiculo v;

    REQUIRE(v.getNome() == "DESCONHECIDO");
    REQUIRE(v.getPreco() == 0);
     REQUIRE(v.getAno() == 0);
}

TEST_CASE("Veiculo 2") {
    Veiculo v("Ferrari", 400000, 2023);

    REQUIRE(v.getNome() == "Ferrari");
    REQUIRE(v.getPreco() == 400000);
    REQUIRE(v.getAno() == 2023);
}

TEST_CASE("Veiculo 3") {
    Veiculo v("Fusca", 100, 1950);

    REQUIRE(v.getNome() == "Fusca");
    REQUIRE(v.getPreco() == 100);
    REQUIRE(v.getAno() == 1950);
    //transformaçao bolada

    v.setNome("New beetle");
    v.setPreco(50000);
    v.setAno(2015);

    REQUIRE(v.getNome() == "New beetle");
    REQUIRE(v.getPreco() == 50000);
    REQUIRE(v.getAno() == 2015);
}

TEST_CASE("Veiculo Terrestre") {
    VeiculoTerrestre ve("Trator", 68100, 2000, 20);

    REQUIRE(ve.getNome() == "Trator");
    REQUIRE(ve.getPreco() == 68100);
    REQUIRE(ve.getAno() == 2000);
    REQUIRE(ve.getVelocidadeMaxima() == 20);

}

TEST_CASE("Veiculo Aéreo") {
    VeiculoAereo vaa("Aviaozito", 200000, 2013, 900);

    REQUIRE(vaa.getNome() == "Aviaozito");
    REQUIRE(vaa.getPreco() == 200000);
    REQUIRE(vaa.getAno() == 2013);
    REQUIRE(vaa.getVelocidadeMaxima() == 900);

}

TEST_CASE("Enum+ carrito") {
    Carro carrito("Golfinho", 90000, 2016, 900, 4, estado::USADO);

    REQUIRE(carrito.getNome() == "Golfinho");
    REQUIRE(carrito.getPreco() == 90000);
    REQUIRE(carrito.getAno() == 2016);
    REQUIRE(carrito.getVelocidadeMaxima() == 900);
    REQUIRE(carrito.getNumportas() == 4);
    REQUIRE(carrito.getE() ==  estado::USADO);

}

TEST_CASE("cout carrito") {
    Carro carrito("Golfinho", 90000, 2016, 200, 4, estado::USADO);

	stringstream ss;
	ss<<carrito;

	REQUIRE("Golfinho - 90000 - 2016 - 4 - 200 - USADO\n" == ss.str());
    

}

TEST_CASE("Enum+ motita") {
    Moto motita("MT-07", 50000, 2019, 300, 0, estado::NOVO);

	stringstream ss;
	ss<<motita;
	REQUIRE("MT-07 - 50000 - 2019 - 300 - 0 - NOVO\n" == ss.str());
    

}

TEST_CASE("= operator") {
    Carro audi("Audi", 100000, 2016, 350, 4, estado::NOVO);

	Carro bmw("BMW 320i", 900000, 2015, 310, 3, estado::USADO);

    //trocouuuuuu
    bmw = audi;

    REQUIRE(bmw.getNome() == "Audi");
    REQUIRE(bmw.getAno() == 2016);
    REQUIRE(bmw.getPreco() == 100000);
    REQUIRE(bmw.getVelocidadeMaxima() == 350);
    REQUIRE(bmw.getNumportas() == 4);
    REQUIRE(bmw.getE() == estado::NOVO);

}


TEST_CASE("copy constructor") {
    Carro audi("Audi", 100000, 2016, 350, 4, estado::NOVO);

	Carro bmw = audi;
    REQUIRE(bmw.getNome() == "Audi");
    REQUIRE(bmw.getAno() == 2016);
    REQUIRE(bmw.getPreco() == 100000);
    REQUIRE(bmw.getVelocidadeMaxima() == 350);
    REQUIRE(bmw.getNumportas() == 4);
    REQUIRE(bmw.getE() == estado::NOVO);

}


TEST_CASE("CARRODOIDO") {
    REQUIRE(CARRODOIDO.getAno() == 0);
    REQUIRE(CARRODOIDO.getNome() == "DESCONHECIDO");
    REQUIRE(CARRODOIDO.getPreco() == 0);
}


TEST_CASE("CARRO DOIDO STATIC") {
    REQUIRE(Carro::CARRODOIDOSTATIC.getAno() == 0);
    REQUIRE(Carro::CARRODOIDOSTATIC.getNome() == "DESCONHECIDO");
    REQUIRE(Carro::CARRODOIDOSTATIC.getPreco() == 0);
}