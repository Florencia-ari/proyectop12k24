#ifndef CURSOS_H
#define CURSOS_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
using namespace std;


class Cursos
{
    public:

        void menuCursos();
        void agregarCurso();
        void mostrarCursos();
        void modificarCursos();
        void buscarCursos();
        void borrarCursos();

    protected:

    private:
        string No;
        string codigo;
        string nombre;
};

#endif // CURSOS_H


