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
    //transformaçao bolada

}