#include "Facultades.h"

Facultades::Facultades()
{
    //ctor
}

void Facultades::menu()
{
   int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t|   SISTEMA GESTION DE FACULTADES  |"<<endl;
	cout<<"\t\t\t------------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingresar Facultad(es)"<<endl;
	cout<<"\t\t\t 2. Desplegar Facultad(es)"<<endl;
	cout<<"\t\t\t 3. Modificar Facultad(es)"<<endl;
	cout<<"\t\t\t 4. Buscar Facultad(es)"<<endl;
	cout<<"\t\t\t 5. Borrar Facultad(es)"<<endl;
	cout<<"\t\t\t 6. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t ¿Desea Ingresar otra Facultad? (Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		cout<<"Enter para continuar..."<<endl;
		break;
		system("pause");
    case 2:
        desplegar();
        cout<<"Enter para continuar..."<<endl;
		break;
		system("pause");
	case 3:
		modificar();
		cout<<"Enter para continuar..."<<endl;
		break;
		system("pause");
		cout<<"Enter para continuar..."<<endl;
	case 4:
		buscar();
		break;
		system("pause");
		cout<<"Enter para continuar..."<<endl;
	case 5:
		borrar();
		cout<<"Enter para continuar..."<<endl;
		break;
		system("pause");
	case 6:
		system("pause");
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!= 6);
}

void Facultades::insertar()
{
cout<< "EN ESTE APARTADO RECOPILARA LAS FACULTADES"<<endl;
}
void Facultades::desplegar()
{
cout<< "EN ESTE APARTADO DESPLEGARA INFORMACION DE LAS FACULTADES"<<endl;
}
void Facultades::modificar()
{
cout<< "EN ESTE APARTADO PODRA MODIFICAR FACULTADES"<<endl;
}
void Facultades::buscar()
{
cout<< "EN ESTE APARTADO PODRA BUSCAR FACULTADES"<<endl;
}
void Facultades::borrar()
{
cout<< "EN ESTE APARTADO PODRA BORRAR FACULTADES"<<endl;
}
