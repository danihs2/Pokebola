#pragma once
#include <iostream>
#include <cstdlib>
using namespace std;
enum Tipo {
    NORMAL,
    HIELO,
    AGUA,
    FUEGO,
    DRAGON,
};


class Pokemon {
public:
    Pokemon(const string& nombre, int vida, int fuerza, Tipo tipo);
    int ataque();
    void recibir(int ataque);
    bool estaVivo();
	void curar();

    string getNombre();
	int getVida();
	int getVidaInicial();
	Tipo getTipo();
	string getTipoString();
	int getFuerza();

	void setNombre(string nombre);
	void setVida(int vida);
	void setVidaInicial(int vidaInicial);
	void setTipo(Tipo tipo);
	void setFuerza(int fuerza);
private:
    string nombre;
    int vida;
    int vidaInicial;
    Tipo tipo;
    int fuerza;
};

class PokemonNormal : public Pokemon {
public:
    PokemonNormal(const string& nombre, int vida, int fuerza)
        : Pokemon(nombre, vida, fuerza, NORMAL) {}

    int ataque() {
        return Pokemon::ataque() + 2;
    }
};

class PokemonHielo : public Pokemon {
public:
	PokemonHielo(const string& nombre, int vida, int fuerza)
		: Pokemon(nombre, vida, fuerza, HIELO) {}

	int ataque() {
		return Pokemon::ataque() + 3;
	}
};

class PokemonAgua : public Pokemon {
public:
	PokemonAgua(const string& nombre, int vida, int fuerza)
		: Pokemon(nombre, vida, fuerza, AGUA) {}

	int ataque() {
		return Pokemon::ataque() + 4;
	}
};

class PokemonFuego : public Pokemon {
public:
	PokemonFuego(const string& nombre, int vida, int fuerza)
		: Pokemon(nombre, vida, fuerza, FUEGO) {}

	int ataque() {
		return Pokemon::ataque() + 5;
	}
};

class PokemonDragon : public Pokemon {
public:
	PokemonDragon(const string& nombre, int vida, int fuerza)
		: Pokemon(nombre, vida, fuerza, DRAGON) {}

	int ataque() {
		return Pokemon::ataque() + 6;
	}
};

