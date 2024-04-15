#ifndef CURSOS_H
#define CURSOS_H


#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>

using namespace std;

class Cursos
{
    public:
        Cursos();
        void menu();
        void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();


    protected:

    private:
        string cursos;
};

#endif // CURSOS_H
