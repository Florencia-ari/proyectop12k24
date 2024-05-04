#ifndef REGISTROS_H
#define REGISTROS_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;

class registros
{
    public:
        registros();
        void menu();
        void insertar();
        void insertarM();
		void desplegar();
		void modificar();
		void buscar();
		void borrar();

    protected:

    private:
        string id,nombre,telefono,facultad_deseada,direccion;
};

#endif // REGISTROS_H
