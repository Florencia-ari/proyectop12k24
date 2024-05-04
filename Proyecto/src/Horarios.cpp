#include "Horarios.h"

Horarios::Horarios()
{

}
void Horarios::menu()
{
   int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   SISTEMA GESTION HORARIOS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Horario(s)"<<endl;
	cout<<"\t\t\t 2. Desplegar Horario(s)"<<endl;
	cout<<"\t\t\t 3. Modificar Horario(s)"<<endl;
	cout<<"\t\t\t 4. Busca De Horario(s)"<<endl;
	cout<<"\t\t\t 5. Borra Horario(s)"<<endl;
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
    		cout<<"\n\t\t\t Ingresar otro Horario(Y,N): ";
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
		system("pause");
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!= 7);
}

void Horarios::insertar()
{
cout<< "EN ESTE APARTADO RECOPILARA LOS HORARIOS"<<endl;
}

void Horarios::desplegar()
{
cout<< "EN ESTE APARTADO DESPLEGARA INFORMACION DE LOS HORARIOS"<<endl;
}
void Horarios::modificar()
{
cout<< "EN ESTE APARTADO PODRA MODIFICAR HORARIOS"<<endl;
}
void Horarios::buscar()
{
cout<< "EN ESTE APARTADO PODRA BUSCAR HORARIOS"<<endl;
}

void Horarios::borrar()
{
cout<< "EN ESTE APARTADO PODRA BORRAR HORARIOS"<<endl;
}
