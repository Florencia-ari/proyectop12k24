#include "Cursos.h"
#include <fstream>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include "Portadas.h"

using namespace std;

    void Cursos::menuCursos()
{

    int opcion;
	bool repetir = true;

	do
    {
	system("cls");

	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t|         Registros             |"<<endl;
	cout<<"\t\t\t---------------------------------"<<endl;
	cout<<"\t\t\t| 1. Ingresar Curso             |"<<endl;
	cout<<"\t\t\t| 2. Despliegue Cursos          |"<<endl;
	cout<<"\t\t\t| 3. Modificar Cursos           |"<<endl;
	cout<<"\t\t\t| 4. Buscar Curso               |"<<endl;
	cout<<"\t\t\t| 5. Borrar Curso               |"<<endl;
	cout<<"\t\t\t| 6. Salir del menu             |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;

	cout<<"\n\t\t\tIngresa una Opcion: ";
    cin>>opcion;

    //Elegir una opcion del Menu
    switch(opcion)
    {
    case 1:
        agregarCurso();
        system("pause");
		break;
	case 2:
		mostrarCursos();
		system("pause");
		break;
	case 3:
		modificarCursos();
		system("pause");
		break;
	case 4:
		buscarCursos();
		system("pause");
		break;
	case 5:
		borrarCursos();
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

 void Cursos::agregarCurso()
{
	system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n----------------------------------- Agregar Cursos --------------------------------------------\n"<<endl;
	//Ingreso de datos
	cout<<"\tIngresa Numero de Curso: ";
	cin>>No;
	cout<<"\tIngresa codigo de Curso: ";
	cin>>codigo;
	cout<<"\tIngresa nombre de Curso (sustituir espacios por '_'): ";
	cin>>nombre;

	file.open("cursos.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< No<<std::left<<std::setw(15)<< codigo <<std::left<<std::setw(15)<< nombre <<"\n";
	file.close();   //Cierra el archivo
}

 void  Cursos::mostrarCursos(){
	system("cls");  //limpia pantalla
	fstream file;   //crea
	int total=0;
	cout<<"\n------------------------- Cursos Registrados-------------------------"<<endl;
	file.open("cursos.txt",ios::in);
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
			cout<<"\t\t\tcodigo : "<<codigo<<endl;
			cout<<"\t\t\tCurso : "<<nombre<<endl;
			file >> No >> codigo>> nombre;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tError..";
		}
	}
	file.close();
}

 void Cursos::modificarCursos()  //Creacion de la clase Jugador, modificarJugadores
{
	system("cls");
	fstream file,file1;
	string Registros_id;
	int found=0;
	cout<<"\n------------------------- \"Modificar Cursos\" -------------------------\n"<<endl;
	file.open("cursos.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tError..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Numero de curso que quiere modificar: ";
		cin>>Registros_id;
		file1.open("Registros3.txt",ios::app | ios::out);
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
		remove("cursos.txt");
		rename("Registros3.txt","cursos.txt");

	}
}

 void Cursos::buscarCursos()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("cursos.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de los Cursos-------------------------"<<endl;
		cout<<"\n\t\t\tERROR...";
	}
	else
	{
		string Registros_id;
		cout<<"\n-------------------------Datos de los Cursos------------------------\n"<<endl;
		cout<<"\nIngrese Numero de Curso que desea buscar: ";
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

 void Cursos::borrarCursos()
{
	system("cls");
	fstream file,file1;
	string Registros_id;
	int found=0;
	cout<<"\n-------------------------Detalles de los Cursos -------------------------\n"<<endl;
	file.open("cursos.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tERROR...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Numero del Curso: ";
		cin>>Registros_id;
		file1.open("Registros3.txt",ios::app | ios::out);
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
			cout<<"\n\t\t\t Numero de Curso no encontrado...";
		}
		file1.close();
		file.close();
		remove("cursos.txt");
		rename("Registros3.txt","cursos.txt");
	}
}
