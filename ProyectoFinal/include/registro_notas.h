#ifndef REGISTRO_NOTAS_H
#define REGISTRO_NOTAS_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;

class registro_notas
{
    public:
        registro_notas();
        void menu();
        void insertar();
        void insertarM();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();

    protected:

    private:

};

#endif // REGISTROS_H
