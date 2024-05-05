#include "Facultad.h"
#include <fstream>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include "Portadas.h"


using namespace std;

void Facultad::menuFacultad()
{

    int opcion;
	bool repetir = true;

	do
    {
	system("cls");

	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t|         Registros             |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t| 1. Ingresar una Facultad      |"<<endl;
	cout<<"\t\t\t| 2. Despliegue Facultades      |"<<endl;
	cout<<"\t\t\t| 3. Modificar Facultades       |"<<endl;
	cout<<"\t\t\t| 4. Buscar Facultad            |"<<endl;
	cout<<"\t\t\t| 5. Borrar Facultad            |"<<endl;
	cout<<"\t\t\t| 6. Salir del menu             |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;

	cout<<"\n\t\t\tIngresa una Opcion: ";
    cin>>opcion;

    //Elegir una opcion del Menu
    switch(opcion)
    {
    case 1:
        agregarFacultad();
        system("pause");
		break;
	case 2:
		mostrarFacultad();
		system("pause");
		break;
	case 3:
		modificarFacultad();
		system("pause");
		break;
	case 4:
		buscarFacultad();
		system("pause");
		break;
	case 5:
		borrarFacultad();
		system("cls");
		break;
	case 6:
		 repetir = false;
		break;
		;
	default:
		cout<<"\n\t\t\t Opcion invalida.";
		}
    }while(repetir);

}

 void Facultad::agregarFacultad()
{
	system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n----------------------------------- Agregar Facultad-------------------------------------------\n"<<endl;
	//Ingreso de datos
	cout<<"\tIngresa Numero de facultad: ";
	cin>>No;
	cout<<"\tIngresa codigo de facultad: ";
	cin>>codigo;
	cout<<"\tIngresa nombre de facultad (sustituir espacios por '_'): ";
	cin>>nombre;

	file.open("Facultad.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< No<<std::left<<std::setw(15)<< codigo <<std::left<<std::setw(15)<< nombre <<"\n";
	file.close();   //Cierra el archivo
}

 void Facultad::mostrarFacultad(){
	system("cls");  //limpia pantalla
	fstream file;   //crea
	int total=0;
	cout<<"\n------------------------- Facultades Registradas-------------------------"<<endl;
	file.open("Facultad.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		file >> No >> codigo >> nombre;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\tNo : "<<No<<endl;
			cout<<"\t\t\tcodigo: "<<codigo<<endl;
			cout<<"\t\t\tFacultad de: "<<nombre<<endl;
			file >> No >> codigo>> nombre;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tError..";
		}
	}
	file.close();
}

 void Facultad::modificarFacultad()  //Creacion de la clase Jugador, modificarJugadores
{
	system("cls");
	fstream file,file1;
	string Registros_id;
	int found=0;
	cout<<"\n------------------------- \"Modificar Facultad\" -------------------------\n"<<endl;
	file.open("Facultad.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tError..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Numero de Facultad que quiere modificar: ";
		cin>>Registros_id;
		file1.open("Registros2.txt",ios::app | ios::out);
		file >> No >> codigo >> nombre
		;
		while(!file.eof())
		{
			if(Registros_id!=No)
			{
			 file1<<std::left<<std::setw(15)<< No <<std::left<<std::setw(15)<< codigo <<std::left<<std::setw(15)<< nombre<< "\n";
			}
			else
			{
				cout<<"\tIngrese No : ";
				cin>>No;
				cout<<"\tIngrese codigo : ";
				cin>>codigo;
				cout<<"\tIngrese nombre (sustituir espacios por '_') : ";
				cin>>nombre;

                file1<<std::left<<std::setw(15)<< No <<std::left<<std::setw(15)<< codigo<<std::left<<std::setw(15)<< nombre<<"\n";
				found++;
			}
			file >> No>> codigo >> nombre ;

		}
		file1.close();
		file.close();
		remove("Facultad.txt");
		rename("Registros2.txt","Facultad.txt");

	}
}

 void Facultad::buscarFacultad()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Facultad.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de la Facultad------------------------"<<endl;
		cout<<"\n\t\t\tERROR...";
	}
	else
	{
		string Registros_id;
		cout<<"\n-------------------------Datos de la Facultad------------------------\n"<<endl;
		cout<<"\nIngrese Numero de Facultad que desea buscar: ";
		cin>>Registros_id;
		file >> No >> codigo>> nombre;
		while(!file.eof())
		{
			if(Registros_id==No)
			{
				cout<<"\n\n\t\t\tNo: "<<No<<endl;
				cout<<"\t\t\tcodigo: "<<codigo<<endl;
				cout<<"\t\t\tFacultad de : "<<nombre<<endl;
				found++;
			}
			file >> No>> codigo>> nombre;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Registros no encontrado...";
		}
		file.close();
	}
}

 void Facultad::borrarFacultad()
{
	system("cls");
	fstream file,file1;
	string Registros_id;
	int found=0;
	cout<<"\n-------------------------Detalles de Facultad -------------------------\n"<<endl;
	file.open("Facultad.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tERROR...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Numero de la Facultad: ";
		cin>>Registros_id;
		file1.open("Registros2.txt",ios::app | ios::out);
		file >> No>> codigo>> nombre;
		while(!file.eof())
		{
			if(Registros_id!= No)
			{
				file1<<std::left<<std::setw(15)<< No<<std::left<<std::setw(15)<< codigo<<std::left<<std::setw(15)<< nombre << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tAccion Realizada Correctamente";
			}
			file >> No >> codigo >> nombre;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Numero de Facultad no encontrado...";
		}
		file1.close();
		file.close();
		remove("Facultad.txt");
		rename("Registros2.txt","Facultad.txt");
	}
}
