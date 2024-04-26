#include "Asignacionesmac.h"
#include <fstream>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include "Portadas.h"
#include "Menu_catedratico.h"



using namespace std;

void Asignacionesmac::menuasignacion()
{
    int opcion;
	bool repetir = true;

	do
    {
	system("cls"); //Limpia pantalla

	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t|   Pago Colegiatura Alumno     |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t| 1. Ingreso Asignacion         |"<<endl;
	cout<<"\t\t\t| 2. Despliegue Asignaciones    |"<<endl;
	cout<<"\t\t\t| 3. Modificar Asignacion       |"<<endl;
	cout<<"\t\t\t| 4. Buscar Asignacion          |"<<endl;
	cout<<"\t\t\t| 5. Borrar pago Alumno         |"<<endl;
	cout<<"\t\t\t| 6. Salir del Menu             |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\tIngresa una Opcion: ";
    cin>>opcion;

    //Elegir una opcion del Menu
    switch(opcion)
    {
    case 1:
        agregarasignacion();
        system("pause");
		break;
	case 2:
		mostrarasignacion();
		system("pause");
		break;
	case 3:
		modificarasignacion();
		system("pause");
		break;
	case 4:
		buscarasignacion();
		system("pause");
		break;
	case 5:
		borrarasignacion();
		system("pause");
		break;
	case 6:
		break;
		;
		}
    }while(repetir,opcion!= 6);
    				system("cls");

}

 void Asignacionesmac::agregarasignacion()
{
	system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n----------------------------------- Asignate a un curso ----------------------------"<<endl;
	//Ingreso de datos
	cout<<"\t\t\tIngrese Codigo de maestro : ";
	cout<<"\t\t\tIngrese Nombre de Catedratico : ";
	cout<<"\t\t\tIngrese Apellido de Catedratico  : ";
	cout<<"\t\t\tIngrese Facultad: ";
	cout<<"\t\t\tIngrese sede: ";
	cout<<"\t\t\tIngrese jornada: ";
	cout<<"\t\t\tIngrese curso: ";
	cout<<"\t\t\tIngrese horario: ";


	file.close();

}

 void Asignacionesmac::mostrarasignacion(){

}

 void Asignacionesmac::modificarasignacion()
{

}

 void Asignacionesmac::buscarasignacion()
{

}

 void Asignacionesmac::borrarasignacion()
{

}
