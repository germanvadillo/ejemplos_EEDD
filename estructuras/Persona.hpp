#ifndef PERSONA_HPP
#define PERSONA_HPP

#include <iostream>
#include <cstring>
using namespace std;

class Persona
{
public:
	Persona(int edad);
	
	~Persona();
	
	int getEdad();
	
	bool esMujer();
	
	void setEdad(int Edad);
	
	void mostrar();
	
private:
	bool Genero;
	int Edad;
	char dni[10];
	
	static int contador;

};

#endif // PERSONA_HPP
