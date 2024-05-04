#ifndef ASIGNACIONESCA_H
#define ASIGNACIONESCA_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;


class Asignacionesca
{
    public:
        Asignacionesca();
        void menu();
        void insertar();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();

    protected:

    private:
};

#endif // ASIGNACIONESCA_H
