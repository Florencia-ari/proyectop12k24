#include "registros.h"

registros::registros()
{

}
void registros::menu()
{
   int opcion;
	char x;
	do
    {
	system("cls");

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t |   REGISTROS ALUMNOS / CATEDRATICOS  |"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\t 1. Ingreso Alumno(s)"<<endl;
	cout<<"\t\t\t 2. Ingreso Catedratico(s)"<<endl;
	cout<<"\t\t\t 3. Desplegar Registro(s)"<<endl;
	cout<<"\t\t\t 4. Modificar Registro(s)"<<endl;
	cout<<"\t\t\t 5. Busca De Registro(s)"<<endl;
	cout<<"\t\t\t 6. Borra Registro(s)"<<endl;
	cout<<"\t\t\t 7. Exit"<<endl;

	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"\t\t\tOpcion a escoger:[1/2/3/4/5/6/7]"<<endl;
	cout<<"\t\t\t-------------------------------"<<endl;
	cout<<"Ingresa tu Opcion: ";
    cin>>opcion;

    switch(opcion)
    {
    case 1:
    	do
    	{
    		insertar();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
		system("pause");
    case 2:
        do
    	{
    		insertarM();
    		cout<<"\n\t\t\t Agrega otra persona(Y,N): ";
    		cin>>x;
		}while(x=='y'||x=='Y');
		break;
			system("pause");
	case 3:
		desplegar();
		break;
		system("pause");
	case 4:
		modificar();
		break;
		system("pause");
	case 5:
		buscar();
		break;
		system("pause");
	case 6:
		borrar();
		break;
		system("pause");
	case 7:
		exit(0);
		system("pause");
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
	}
	getch();
    }while(opcion!= 7);
}

void registros::insertar()
{
cout<< "EN ESTE APARTADO RECOPILARA INFORMACION DE REGISTRO DEL ALUMNO"<<endl;
}
void registros::insertarM()
{
cout<< "EN ESTE APARTADO RECOPILARA INFORMACION DE REGISTRO DEL CATEDRATICO"<<endl;
}

void registros::desplegar()
{
cout<< "EN ESTE APARTADO DESPLEGARA INFORMACION DE LOS REGISTROS"<<endl;
}
void registros::modificar()
{
cout<< "EN ESTE APARTADO PODRA MODIFICAR REGISTROS"<<endl;
}
void registros::buscar()
{
cout<< "EN ESTE APARTADO PODRA BUSCAR REGISTROS"<<endl;
}

void registros::borrar()
{
cout<< "EN ESTE APARTADO PODRA BORRAR REGISTROS"<<endl;
}
