#include "Asignacionesca.h"

Asignacionesca::Asignacionesca()
{
    //ctor
}


void Asignacionesca::menu()
{
   int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t| ASIGNACION CURSOS A ALUMNOS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Asignaciones"<<endl;
	cout<<"\t\t\t 2. Desplegar Asignaciones"<<endl;
	cout<<"\t\t\t 3. Modificar Asignaciones"<<endl;
	cout<<"\t\t\t 4. Busca De Asignaciones"<<endl;
	cout<<"\t\t\t 5. Borra Asignaciones"<<endl;
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
    		cout<<"\n\t\t\t Ingresar otra Asignacion (Y,N): ";
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

void Asignacionesca::insertar()
{
cout<< "EN ESTE APARTADO RECOPILARA LAS ASIGNACIONES "<<endl;
}

void Asignacionesca::desplegar()
{
cout<< "EN ESTE APARTADO DESPLEGARA INFORMACION DE LAS ASIGNACIONES"<<endl;
}
void Asignacionesca::modificar()
{
cout<< "EN ESTE APARTADO PODRA MODIFICAR LAS ASIGNACIONES"<<endl;
}
void Asignacionesca::buscar()
{
cout<< "EN ESTE APARTADO PODRA BUSCAR LAS ASIGNACIONES"<<endl;
}

void Asignacionesca::borrar()
{
cout<< "EN ESTE APARTADO PODRA BORRAR HORARIOS"<<endl;
}
