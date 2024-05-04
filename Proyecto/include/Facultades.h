#ifndef FACULTADES_H
#define FACULTADES_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class Facultades
{
    public:
        Facultades();
        void menu();
        void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();


    protected:

    private:
        string facultades;
};

#endif // FACULTADES_H
