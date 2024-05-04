#ifndef TESORERIA_H
#define TESORERIA_H

#include "Usuario.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
#include "Tesoreria.h"


class Tesoreria
{
	 public: //constructores para la clase
        void menuTesoreria();
        void agregarJugador();
        void mostrarJugadores();
        void modificarJugadores();
        void buscarJugador();
        void borrarJugador();
        bool loginJugador();
        bool buscarLoginJugador(string user, string passw);
        //string getapodo();



    protected:

    private:    //Atributos privados y protegidos
        string id;
        string nombre;
        string apodo;
        string contrasena;
        //int partidasJugadas;
};

#endif // TESORERIA_H
