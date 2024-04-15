#include "Jornada.h"

Jornada::Jornada()
{
    //ctor
}

void Jornada::menu()
{
   int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION JORNADA  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Jornada"<<endl;
	cout<<"\t\t\t 2. Desplegar Jornada"<<endl;
	cout<<"\t\t\t 3. Modificar Jornada"<<endl;
	cout<<"\t\t\t 4. Busqueda de Jordada"<<endl;
	cout<<"\t\t\t 5. Borrar Jornada"<<endl;
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
    		cout<<"\n\t\t\t Ingresar otro Jornada(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
		system("pause");
    case 2:
        desplegar();
		break;
		system("pause");
	case 3:
		modificar();
		break;
		system("pause");
	case 4:
		buscar();
		break;
		system("pause");
	case 5:
		borrar();
		break;
		system("pause");
	case 6:
		exit(0);
		system("pause");
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!= 7);
}

void Jornada::insertar()
{
cout<< "EN ESTE APARTADO RECOPILARA LAS JORNADAS"<<endl;
}

void Jornada::desplegar()
{
cout<< "EN ESTE APARTADO DESPLEGARA INFORMACION DE LAS JORNADAS"<<endl;
}
void Jornada::modificar()
{
cout<< "EN ESTE APARTADO PODRA MODIFICAR JORNADA"<<endl;
}
void Jornada::buscar()
{
cout<< "EN ESTE APARTADO PODRA BUSCAR JORNADAS"<<endl;
}

void Jornada::borrar()
{
cout<< "EN ESTE APARTADO PODRA BORRAR JORNADAS"<<endl;
}
