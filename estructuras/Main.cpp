#include "Persona.hpp"
#include <iostream>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;

int main(){
	srand(time(0));
	
	vector <Persona> personas;
	
	for (int edad = 18; edad <= 27; edad++) {
		personas.push_back(Persona(edad));
	}
	
	cout << "listado personas" << endl;
	for (size_t i = 0; i < personas.size(); i++) {
		personas[i].mostrar();
	}
	return 0;
}