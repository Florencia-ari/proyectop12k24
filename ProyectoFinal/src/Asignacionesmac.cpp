#include "Asignacionesmac.h"
#include <fstream>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include "Portadas.h"
#include "Menu_catedratico.h"
#include "Facultad.h"



using namespace std;

void Asignacionesmac::menuasignacion()
{
    int opcion;
    char x;
	bool repetir = true;

	do
    {
	system("cls"); //Limpia pantalla

	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t|  ASIGNACION MAESTRO A CURSO   |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t| 1. Ingreso Asignacion         |"<<endl;
	cout<<"\t\t\t| 2. Despliegue Asignaciones    |"<<endl;
	cout<<"\t\t\t| 3. Modificar Asignacion       |"<<endl;
	cout<<"\t\t\t| 4. Buscar Asignacion          |"<<endl;
	cout<<"\t\t\t| 5. Borrar Asignacion          |"<<endl;
	cout<<"\t\t\t| 6. Salir del Menu             |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\tIngresa una Opcion: ";
    cin>>opcion;

    //Elegir una opcion del Menu
    switch(opcion)
    {
    case 1:
        do{
        agregarasignacion();
        cout<<"\n\t\tDesea asignar otro curso a maestro? (s/n) ";
        cin>>x;
        }while(x=='S'||x=='s');
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


}

 void Asignacionesmac::mostrarasignacion()
{

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
