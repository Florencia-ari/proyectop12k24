#ifndef COLEGIATURA_H
#define COLEGIATURA_H

#include "Usuario.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;

class Colegiatura
{
	 public: //constructores para la clase
        void menuColegiatura();
        void agregarColegiatura();
        void mostrarColegiatura();
        void modificarColegiatura();
        void buscarColegiatura();
        void borrarColegiatura();

    protected:

    private:    //Atributos privados y protegidos
        string id;
        string nombre;
        string apellido;
        string mes;
};

#endif // COLEGIATURA_H
