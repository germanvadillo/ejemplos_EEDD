#include "Persona.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

int Persona::contador = 0;

Persona::Persona(int edad)
{
	Edad = edad;
	Genero = rand() % 2;
	
	contador++;
	string numero = to_string(10000000 + contador);
	char letra = 'A' + (contador % 26);
	string dniStr = numero + letra;
	
	strncpy(dni, dniStr.c_str(), sizeof(dni));
	dni[sizeof(dni) - 1] = '/0';
}

Persona::~Persona()
{
	
}

int Persona:: getEdad()
{
	return Edad;
}
bool Persona:: esMujer()
{
	return Genero;
}
void Persona:: setEdad(int edad)
{
	Edad = edad;
}
void Persona::mostrar() {
    cout << "Edad: " << Edad
     << "Genero: " << (Genero ? "Mujer" : "Hombre")
     << "DNI: " << dni
	 << endl;
}