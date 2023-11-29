#include "Pokemon.h"
using namespace std;


Pokemon::Pokemon(const string& nombre, int vida, int fuerza, Tipo tipo)
	: nombre(nombre), vida(vida), vidaInicial(vida), tipo(tipo), fuerza(fuerza) {}

int Pokemon::getVida(){
	return vida;
}

void Pokemon::setVida(int vida){
	this->vida = vida;
}

Tipo Pokemon::getTipo(){
	return tipo;
}

void Pokemon::setTipo(Tipo tipo){
	this->tipo = tipo;
}

int Pokemon::getFuerza(){
	return fuerza;
}

void Pokemon::setFuerza(int fuerza){
	this->fuerza = fuerza;
}

string Pokemon::getTipoString() {
	switch (tipo) {
	case Tipo::AGUA:
		return "Agua";
	case Tipo::FUEGO:
		return "Fuego";
	case Tipo::DRAGON:
		return "Dragon";
	case Tipo::HIELO:
		return "Hielo";
	case Tipo::NORMAL:
		return "Normal";
	default:
		return "Desconocido";
	}
}

string Pokemon::getNombre(){
	return nombre;
}

void Pokemon::setNombre(string nombre){
	this->nombre = nombre;
}

int Pokemon::getVidaInicial(){
	return vidaInicial;
}

void Pokemon::setVidaInicial(int vidaInicial){
	this->vidaInicial = vidaInicial;
}

int Pokemon::ataque(){
	return rand() % (fuerza + 1);
}

void Pokemon::recibir(int ataque){
	vida -= ataque;
}

bool Pokemon::estaVivo(){
	return vida > 0;
}

void Pokemon::curar(){
	vida = vidaInicial;
}