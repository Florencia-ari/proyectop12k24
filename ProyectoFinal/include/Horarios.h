#ifndef HORARIOS_H
#define HORARIOS_H

#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;

class Horarios
{
    public:
        Horarios();
        void menu();
        void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();

    protected:

    private:
        string horario;
};

#endif // HORARIOS_H
