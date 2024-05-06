#include "Jornada.h"
#include <fstream>
#include <unistd.h>
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <string>
#include <cstring>


using namespace std;




enum Opciones { NUEVO=1, MODIFICAR, ELIMINAR, DESPLEGAR, FIN };

void Jornada::ejecutarJornada()
{void crearArchivoJornada();


   // abrir el archivo en modo de lectura y escritura
   fstream JornadaES( "jornada.dat", ios::in | ios::out | ios::binary);

   // salir del programa si fstream no puede abrir el archivo
   if ( !JornadaES ) {
      cerr << "No se pudo abrir el archivo." << endl;
      crearArchivoJornada();
      cout <<  "Archivo creado satisfactoriamente, pruebe de nuevo";
      exit ( 1);

   } // fin de instrucción if

   int opcion;

   // permitir al usuario que especifique la acción
   while ( ( opcion = escribirOpcion() ) != FIN ) {

      switch ( opcion ) {

      	// crear registro
         case NUEVO:
            nuevoRegistro( JornadaES );
             system("pause");
            break;


         // actualizar registro
         case MODIFICAR:
            actualizarRegistro( JornadaES );
             system("pause");
            break;



         // eliminar registro existente
         case ELIMINAR:
            eliminarRegistro( JornadaES );
             system("pause");
            break;
         // consultar registros existentes por pantalla
         case DESPLEGAR:
            consultarRegistro( JornadaES );
             system("pause");
            break;
         // mostrar error si el usuario no selecciona una opción válida
         default:
            cerr << "Opcion incorrecta" << endl;
            break;

      } // fin de instrucción switch

      JornadaES.clear(); // reinicializar indicador de fin de archivo

   } // fin de instrucción while


} // fin de main

// permitir al usuario que introduzca la opción del menú
int Jornada::escribirOpcion()
{
	system("cls");
   // mostrar opciones disponibles
    cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t|         CRUD Jornadas         |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t| 1. Ingresar Jornada           |"<<endl;
	cout<<"\t\t\t| 2. Modificar Jornada          |"<<endl;
	cout<<"\t\t\t| 3. Borrar Jornada             |"<<endl;
	cout<<"\t\t\t| 4. Desplegar Jornada          |"<<endl;
	cout<<"\t\t\t| 5. Regresar al menu anterior  |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\tIngresa una Opcion: ";

   int opcionMenu;
   cin >> opcionMenu; // recibir opción del usuario

   return opcionMenu;

} // fin de la función escribirOpcion

// actualizar el saldo en el registro
void  Jornada::actualizarRegistro( fstream &actualizarArchivo )
{int obtenerJornada( const char * const );
void mostrarLineaPantalla( const Jornada &);

  int CodigoJornada = obtenerJornada("\n\t\t\tEscriba el código de jornada a modificar: ");

    // Desplazar el puntero de posición de archivo hasta el registro correcto en el archivo
    actualizarArchivo.seekg((CodigoJornada - 1) * sizeof(Jornada));

    // Leer el registro del archivo
    Jornada jor;
    actualizarArchivo.read(reinterpret_cast<char *>(&jor), sizeof(Jornada));

    // Verificar si la jornada existe
    if (jor.obtenerCodigoJornada() != 0) {


        // Solicitar al usuario los nuevos datos
        int nuevoCodigoJornada;
        char nuevoNombre[15];

        cout << "\n\t\t\tIngrese el nuevo Código de Jornada: ";
        cin >> nuevoCodigoJornada;

        cout << "\t\t\tIngrese el nuevo Nombre de Jornada: ";
        cin >> setw(15) >> nuevoNombre;

        // Actualizar los datos de la jornada
        jor.establecerCodigoJornada(nuevoCodigoJornada);
        jor.establecerNombre(nuevoNombre);

        // Desplazar el puntero de posición de archivo hasta el registro correcto en el archivo
        actualizarArchivo.seekp((CodigoJornada - 1) * sizeof(Jornada));

        // Escribir el registro actualizado en el archivo
        actualizarArchivo.write(reinterpret_cast<const char *>(&jor), sizeof(Jornada));

        cout << "\n\t\t\tLa Jornada #" << CodigoJornada << " fue modificada exitosamente." << endl;
    } else {
        cerr << "\n\t\t\tLa jornada #" << CodigoJornada << " no existe." << endl;
    }
} // fin de la función actualizarRegistro

// crear e insertar registro
void  Jornada::nuevoRegistro( fstream &insertarEnArchivo )
{int obtenerJornada( const char * const );

   // obtener el número de jornada a crear
   int CodigoJornada = obtenerJornada( "\n\t\t\tEscriba el codigo de jornada: " );

   // desplazar el apuntador de posición del archivo hasta el registro correcto en el archivo
   insertarEnArchivo.seekg(
      ( CodigoJornada - 1 ) * sizeof( Jornada ) );

   // leer el registro del archivo
   Jornada jor;
   insertarEnArchivo.read( reinterpret_cast< char * >( &jor ),
      sizeof( Jornada ) );

   // crear el registro, si éste no existe ya
   if ( jor.obtenerCodigoJornada() == 0 ) {

      char Nombre[ 15 ];


      // el usuario introduce el Nombre, primer nombre y saldo
      cout << "\t\t\tEscriba el Nombre de la Jornada : " ;
cin >> setw( 15 ) >> Nombre;



      // usar valores para llenar los valores de la jornada
      jor.establecerNombre( Nombre );
      jor.establecerCodigoJornada( CodigoJornada );

      // desplazar el apuntador de posición de archivo hasta el registro correcto en el archivo
      insertarEnArchivo.seekp( ( CodigoJornada - 1 ) *
         sizeof( Jornada ) );

      // insertar el registro en el archivo
      insertarEnArchivo.write(
         reinterpret_cast< const char * >( &jor ),
         sizeof( Jornada ) );

   } // fin de instrucción if

   // mostrar error si la jornada ya existe
   else
      cerr << "\n\t\t\tLa jornada #" << CodigoJornada<< " ya existe." << endl;

} // fin de la función nuevoRegistro

// eliminar un registro existente
void  Jornada::eliminarRegistro( fstream &eliminarDeArchivo )
{int obtenerJornada( const char * const );
int CodigoJornada = obtenerJornada("\n\t\t\tEscriba código de jornada a eliminar: ");

    // Desplazar el puntero de posición de archivo hasta el registro correcto en el archivo
    eliminarDeArchivo.seekg((CodigoJornada - 1) * sizeof(Jornada));

    // Leer el registro del archivo
    Jornada jor;
    eliminarDeArchivo.read(reinterpret_cast<char *>(&jor), sizeof(Jornada));

    // Verificar si el registro existe
    if (jor.obtenerCodigoJornada() != 0) {
        // Desplazar el puntero de posición de archivo hasta el registro correcto en el archivo
        eliminarDeArchivo.seekp((CodigoJornada - 1) * sizeof(Jornada));

        // Crear un nuevo objeto Jornada en blanco para reemplazar el registro existente
        Jornada jorEnBlanco;

        // Escribir el registro en blanco sobre el registro existente para eliminarlo
        eliminarDeArchivo.write(reinterpret_cast<const char *>(&jorEnBlanco), sizeof(Jornada));

        cout << "\n\t\t\tJornada #" << CodigoJornada << " eliminada.\n";
    } else {
        cerr << "\n\t\t\tLa jornada #" << CodigoJornada << " no existe.\n";
    }

} // fin de eliminarRegistro
void  Jornada::consultarRegistro( fstream &leerDeArchivo )
{
void mostrarLinea( ostream&, const Jornada & );
void mostrarLineaPantalla( const Jornada &);
 cout<<"+-------------------------------------------------+"<<endl;
   cout << left << setw( 10 ) << "Codigo" << setw( 16 )
       << "Nombre" << endl;

   // colocar el apuntador de posición de archivo al principio del archivo de registros
   leerDeArchivo.seekg( 0 );

   // leer el primer registro del archivo de registros
   Jornada jor;
   leerDeArchivo.read( reinterpret_cast< char * >( &jor ),
      sizeof( Jornada ) );

   // copiar todos los registros del archivo de registros en el archivo de texto
   while ( !leerDeArchivo.eof() ) {

      // escribir un registro individual en el archivo de texto
      if ( jor.obtenerCodigoJornada() != 0 )
         mostrarLineaPantalla(jor);

      // leer siguiente registro del archivo de registros
      leerDeArchivo.read( reinterpret_cast< char * >( &jor ),
         sizeof( Jornada ) );

   } // fin de instrucción while

} // fin de la función consultarRegistro

// mostrar registro individual
void mostrarLinea( ostream &salida, const Jornada &registro )
{
   salida << left << setw( 10 ) << registro.obtenerCodigoJornada()
          << setw( 16 ) << registro.obtenerNombre().data()<< endl;

} // fin de la función mostrarLinea
void mostrarLineaPantalla( const Jornada &registro )
{
   cout << left << setw( 10 ) << registro.obtenerCodigoJornada()
          << setw( 16 ) << registro.obtenerNombre().data()<< endl;

} // fin de la función mostrarLineaPantalla

// obtener el valor del número de jornada del usuario
int obtenerJornada( const char * const indicador )
{
   int CodigoJornada;

   // obtener el valor del número de jornada
      cout << indicador << "";
      cin >> CodigoJornada;



   return CodigoJornada;

} // fin de la función obtenerJornada
void crearArchivoJornada()
{
    ofstream jornadaSalida( "jornada.dat", ios::out | ios::binary );
   // salir del programa si ofstream no pudo abrir el archivo
   if ( !jornadaSalida ) {
      cerr << "No se pudo abrir el archivo." << endl;
      exit( 1 );

   } // fin de instrucción if

   // crear Jornada sin información
   Jornada jorEnBlanco;

   // escribir 100 registros en blanco en el archivo
   for ( int i = 0; i < 100; i++ )
      jornadaSalida.write(
         reinterpret_cast< const char * >( &jorEnBlanco ),
         sizeof( Jornada ) );
}


// constructor predeterminado de Jornada
Jornada::Jornada( int valorCodigoJornada,
   string valorNombre)
{
   establecerCodigoJornada( valorCodigoJornada );
   establecerNombre( valorNombre );


} // fin del constructor de Jornada

// obtener el valor del número de jornada
int Jornada::obtenerCodigoJornada() const
{
   return CodigoJornada;

} // fin de la función obtenerCodigoJornada

// establecer el valor del número de jornada
void Jornada::establecerCodigoJornada( int valorCodigoJornada )
{
   CodigoJornada = valorCodigoJornada;

} // fin de la función establecerCodigoJornada

// obtener el valor del Nombre
string Jornada::obtenerNombre() const
{
   return Nombre;

} // fin de la función obtenerNombre

// establecer el valor del Nombre
void Jornada::establecerNombre( string NombreString )
{
   // copiar a lo más 15 caracteres de la cadena en Nombre
   const char *valorNombre = NombreString.data();
   int longitud = strlen( valorNombre );
   longitud = ( longitud < 15 ? longitud : 14 );
   strncpy( Nombre, valorNombre, longitud );

   // anexar caracter nulo al Nombre
   Nombre[ longitud ] = '\0';

} // fin de la función establecerNombre
