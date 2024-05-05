#ifndef REGISTROS_H
#define REGISTROS_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;


class Facultad
{
	public:
		void menuFacultad();
        void agregarFacultad();
        void mostrarFacultad();
        void modificarFacultad();
        void buscarFacultad();
        void borrarFacultad();


	protected:

	private:
		 string No;
        string codigo;
        string nombre;

};

#endif // REGISTROS_H
