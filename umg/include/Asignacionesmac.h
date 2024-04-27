#ifndef ASIGNACIONESMAC_H
#define ASIGNACIONESMAC_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>
#include "Portadas.h"
#include "Menu_catedratico.h"
using namespace std;



class Asignacionesmac
{
	public:
		 void menuasignacion();
        void agregarasignacion();
        void mostrarasignacion();
        void modificarasignacion();
        void buscarasignacion();
        void borrarasignacion();
        //string facu1,sede1,cursos1,jornada1,horario1,codima,nombre,apellido;

	protected:

	private:
//string facu1,sede1,cursos1,jornada1,horario1,codima,nombre,apellido;

};

#endif // ASIGNACIONESMAC_H
