#include "Colegiatura.h"
#include "Portadas.h"
#include <fstream>
#include <unistd.h>
#include <fstream>
#include "Usuario.h"
#include <iostream>


using namespace std;

void Colegiatura::menuColegiatura()
{
    int opcion;
	bool repetir = true;

	do
    {
	system("cls"); //Limpia pantalla

	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t|   Pago Colegiatura Alumno     |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;
	cout<<"\t\t\t| 1. Ingreso pago Alumno        |"<<endl;
	cout<<"\t\t\t| 2. Despliegue pagos Alumnos   |"<<endl;
	cout<<"\t\t\t| 3. Modificar pago Alumno      |"<<endl;
	cout<<"\t\t\t| 4. Buscar pago Alumno         |"<<endl;
	cout<<"\t\t\t| 5. Borrar pago Alumno         |"<<endl;
	cout<<"\t\t\t| 6. Salir del Menu             |"<<endl;
	cout<<"\t\t\t+-------------------------------+"<<endl;

	cout<<"Ingresa una Opcion: ";
    cin>>opcion;

    //Elegir una opcion del Menu
    switch(opcion)
    {
    case 1:
        agregarColegiatura();
        system("pause");
		break;
	case 2:
		mostrarColegiatura();
		system("pause");
		break;
	case 3:
		modificarColegiatura();
		system("pause");
		break;
	case 4:
		buscarColegiatura();
		system("pause");
		break;
	case 5:
		borrarColegiatura();
		system("pause");
		break;
	case 6:
		break;
		;
		}
    }while(repetir,opcion!= 6);
    				system("cls");

}

 void Colegiatura::agregarColegiatura()
{
	system("cls");      //limpia pantalla
	fstream file;       //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n----------------------------------- Agregar Pago de Colegiatura ----------------------------"<<endl;
	//Ingreso de datos
	cout<<"\t\t\tIngresa ID del Alumno : ";
	cin>>id;
	cout<<"\t\t\tIngresa Nombre del Alumno : ";
	cin>>nombre;
	cout<<"\t\t\tIngresa Apellido del Alumno : ";
	cin>>apellido;
	cout<<"\t\t\tIngresa mes a pagar : ";
	cin>>mes;

	file.open("Colegiatura.txt", ios::app | ios::out);
	file<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< mes << "\n";
	file.close();   //Cierra el archivo
}

 void Colegiatura::mostrarColegiatura(){
	system("cls");  //limpia pantalla
	fstream file;   //crea
	int total=0;
	cout<<"\n-------------------------Detalles de Pagos Colegiaturas -------------------------"<<endl;
	file.open("Colegiatura.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
		file >> id >> nombre >> apellido >> mes;
		while(!file.eof())
		{
			total++;
			cout<<"\n\n\t\t\t Id del Alumno: "<<id<<endl;
			cout<<"\t\t\t Nombre del Alumno: "<<nombre<<endl;
			cout<<"\t\t\t Apellido del Alumno: "<<apellido<<endl;
			cout<<"\t\t\t Mes solventado: "<<mes<<endl;
			file >> id >> nombre >> apellido >> mes;
		}
		if(total==0)
		{
			cout<<"\n\t\t\tError..";
		}
	}
	file.close();
}

 void Colegiatura::modificarColegiatura()  //Creacion de la clase Jugador, modificarJugadores
{
	system("cls");
	fstream file,file1;
	string Colegiatura_id;
	int found=0;
	cout<<"\n------------------------- \"Modificacion Detalles de Colegiaturas\" -------------------------"<<endl;
	file.open("Colegiatura.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tError..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese ID del Alumno que quiere modificar: ";
		cin>>Colegiatura_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> apellido >> mes;
		while(!file.eof())
		{
			if(Colegiatura_id!=id)
			{
			 file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< mes << "\n";
			}
			else
			{
				cout<<"\t\t\tIngrese Id del Alumno: ";
				cin>>id;
				cout<<"\t\t\tIngrese Nombre del Alumno: ";
				cin>>nombre;
				cout<<"\t\t\tIngrese Apellido del Alumno: ";
				cin>>apellido;
				cout<<"\t\t\tIngrese mes: ";
				cin>>mes;
                file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< mes << "\n";
				found++;
			}
			file >> id >> nombre >> apellido >> mes;

		}
		file1.close();
		file.close();
		remove("Colegiatura.txt");
		rename("Record.txt","Colegiatura.txt");

	}
}

 void Colegiatura::buscarColegiatura()
{
	system("cls");
	fstream file;
	int found=0;
	file.open("Colegiatura.txt",ios::in);
	if(!file)
	{
		cout<<"\n-------------------------Datos de Colegiatura de Alumno------------------------"<<endl;
		cout<<"\n\t\t\tERROR...";
	}
	else
	{
		string Colegiatura_id;
		cout<<"\n-------------------------Datos de Colegiatura de ALumno------------------------"<<endl;
		cout<<"\nIngrese Id del Alumno a buscar: ";
		cin>>Colegiatura_id;
		file >> id >> nombre >> apellido >> mes;
		while(!file.eof())
		{
			if(Colegiatura_id==id)
			{
				cout<<"\n\n\t\t\t ID Alumno: "<<id<<endl;
				cout<<"\t\t\t Nombre Alumno: "<<nombre<<endl;
				cout<<"\t\t\t Apellido Alumno: "<<apellido<<endl;
				cout<<"\t\t\t Mes Solventado: "<<mes<<endl;
				found++;
			}
			file >> id >> nombre >> apellido >> mes;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Alumno no encontrado...";
		}
		file.close();
	}
}

 void Colegiatura::borrarColegiatura()
{
	system("cls");
	fstream file,file1;
	string Colegiatura_id;
	int found=0;
	cout<<"\n-------------------------Detalles de Colegiatura a Borrar-------------------------"<<endl;
	file.open("Colegiatura.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tERROR...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el Id del Alumno: ";
		cin>>Colegiatura_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> id >> nombre >> apellido >> mes ;
		while(!file.eof())
		{
			if(Colegiatura_id!= id)
			{
				file1<<std::left<<std::setw(15)<< id <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< mes << "\n";
			}
			else
			{
				found++;
				cout << "\n\t\t\tAccion Realizada Correctamente";
			}
			file >> id >> nombre >> apellido >> mes;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Id del alumno no encontrado...";
		}
		file1.close();
		file.close();
		remove("Colegiatura.txt");
		rename("Record.txt","Colegiatura.txt");
	}
}
