#ifndef JORNADA_H
#define JORNADA_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;

class Jornada
{
    public:
        Jornada();
        void menu();
        void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();

    protected:

    private:
        string jornada;
};

#endif // JORNADA_H

