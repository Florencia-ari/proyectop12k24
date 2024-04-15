#include "registro_notas.h"

registro_notas::registro_notas()
{

}
void registro_notas::menu()
{
   int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION REGISTROS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso de Notas"<<endl;
	cout<<"\t\t\t 2. Modificar Notas"<<endl;
	cout<<"\t\t\t 3. Salir"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
	case 1:
		desplegar();
		break;
		system("pause");
	case 2:
		modificar();
		break;
		system("pause");
	case 3:
		exit(0);
		system("pause");
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!= 3);
}

void registro_notas::insertar()
{
cout<< "EN ESTE APARTADO RECOPILARA INFORMACION DE REGISTRO DEL ALUMNO"<<endl;
}
void registro_notas::insertarM()
{
cout<< "EN ESTE APARTADO RECOPILARA INFORMACION DE REGISTRO DEL CATEDRATICO"<<endl;
}

void registro_notas::desplegar()
{
cout<< "EN ESTE APARTADO DESPLEGARA INFORMACION DE LOS REGISTROS"<<endl;
}
void registro_notas::modificar()
{
cout<< "EN ESTE APARTADO PODRA MODIFICAR REGISTROS"<<endl;
}
void registro_notas::buscar()
{
cout<< "EN ESTE APARTADO PODRA BUSCAR REGISTROS"<<endl;
}

void registro_notas::borrar()
{
cout<< "EN ESTE APARTADO PODRA BORRAR REGISTROS"<<endl;
}
