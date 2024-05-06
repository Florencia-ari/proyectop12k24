#ifndef JORNADA_H
#define JORNADA_H
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
#include<string>

using namespace std;

class Jornada{
public:
	 void ejecutarJornada();

 int escribirOpcion();
void actualizarRegistro( fstream& );
void nuevoRegistro( fstream& );
void eliminarRegistro( fstream& );

void consultarRegistro( fstream& );

   Jornada( int = 0, string = "" );

   // funciones de acceso para numeroCuenta
   void establecerCodigoJornada( int );
   int obtenerCodigoJornada() const;

   // funciones de acceso para apellido
   void establecerNombre( string );
   string obtenerNombre() const;



private:
   int CodigoJornada;
   char Nombre[ 15 ];

};

#endif // JORNADA_H
