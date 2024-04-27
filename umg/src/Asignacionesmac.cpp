#include "Asignacionesmac.h"
#include <fstream>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include "Portadas.h"
#include "Menu_catedratico.h"



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
	system("cls");      //limpia pantalla
	fstream file;
	int facu,sede,cursos,jornada,horario;
    string facu1,sede1,cursos1,jornada1,horario1,codima,nombre,apellido;

	     //creacion variable file de la libreria fstream
	cout<<"\n-----------------------------------------------------------------------------------------------";
	cout<<"\n----------------------------------- Asignate a un curso ----------------------------"<<endl;
	//Ingreso de datos
	cout<<"\t\t\tIngrese Codigo de maestro : ";
	cin>>codima;
	cout<<"\t\t\tIngrese Nombre de Catedratico : ";
	cin>>nombre;
	cout<<"\t\t\tIngrese Apellido de Catedratico  : ";
	cin>>apellido;
	system("pause");
    system("cls");
	Portadas imprimir1;
	imprimir1.imprimir("sede.txt");
	cout<<"\t\t\tIngrese sede: ";
	cin>>sede;
	switch(sede){
    case 1:
        sede1="Portales";
        break;
    case 2:
        sede1="Villa Nueva";
        break;
    case 3:
        sede1="Peten";
        break;
    case 4:
        sede1="Chiquimula";
        break;
    case 5:
        sede1="Sanarate";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    system("cls");
	Portadas imprimir;
	imprimir.imprimir("Facultad.txt");
	cout<<"\t\t\tIngrese Facultad: ";
	cin>>facu;
	switch(facu){
    case 1:
        facu1="Ingenieria";
        break;
    case 2:
        facu1="Derecho";
        break;
    case 3:
        facu1="Arquitectura";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    system("cls");
	if (facu==1)
    {
        Portadas imprimir2;
        imprimir2.imprimir("cursoIng.txt");
        cout<<"\t\t\tIngrese opcion de curso: ";
        cin>>cursos;
        switch(cursos){
    case 1:
        cursos1="Fisica I";
        break;
    case 2:
        cursos1="Programacion I";
        break;
    case 3:
        cursos1="calculo I";
        break;
    case 4:
        cursos1="Proceso Administrativo";
        break;
    case 5:
        cursos1="Derecho informatico";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(facu==2)
    {
        Portadas imprimir3;
        imprimir3.imprimir("cursosEnf.txt");
        cout<<"\t\t\tIngrese opcion de curso: ";
        cin>>cursos;
        switch(cursos){
    case 1:
        cursos1="Derecho romano";
        break;
    case 2:
        cursos1="Derecho civil";
        break;
    case 3:
        cursos1="Derecho Penal";
        break;
    case 4:
        cursos1="Derecho Mercantil";
        break;
    case 5:
        cursos1="Sociologia";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(facu==3)
    {
        Portadas imprimir4;
        imprimir4.imprimir("cursosArqui.txt");
        cout<<"\t\t\tIngrese opcion de curso: ";
        cin>>cursos;
        switch(cursos){
    case 1:
        cursos1="Dibujo arquitectonico II";
        break;
    case 2:
        cursos1="Tecnicas de presentacion";
        break;
    case 3:
        cursos1="Diseno arquitectonico II";
        break;
    case 4:
        cursos1="Materiales de Construccion";
        break;
    case 5:
        cursos1="Metodos de investigacion";
        break;
    case 6:
        cursos1="Ecologia";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else
    {
        cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
    }
    system("cls");

    Portadas imprimir5;
	imprimir5.imprimir("Jornada.txt");
	cout<<"\t\t\tIngrese opcion de Jornada: ";
	cin>>jornada;
	switch(jornada){
    case 1:
        jornada1="Matutina";
        break;
    case 2:
        jornada1="Vespertina";
        break;
    case 3:
        jornada1="Sabado";
        break;
    case 4:
        jornada1="Domingo";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}

    system("cls");
	if (facu==1)
    {
        Portadas imprimir6;
        imprimir6.imprimir("horarioMatu.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30 AM a 08:30 AM";
        break;
    case 2:
        horario1="08:30 AM a 10:00 AM";
        break;
    case 3:
        horario1="10:30 AM a 12:00 PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(facu==2)
    {
        Portadas imprimir7;
        imprimir7.imprimir("horarioVesp.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="05:00 PM a 06:30 PM";
        break;
    case 2:
        horario1="06:30 PM a 08:00 PM";
        break;
    case 3:
        horario1="08:30 PM a 10:00 PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(facu==3)
    {
        Portadas imprimir8;
        imprimir8.imprimir("horarioSaba.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30 AM a 08:30 AM";
        break;
    case 2:
        horario1="08:30 AM a 10:00 AM";
        break;
    case 3:
        horario1="10:30 AM a 12:00 PM";
        break;
    case 4:
        horario1="12:00 PM a 01:30 PM";
        break;
    case 5:
        horario1="02:00 PM a 03:30 PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(facu==4)
    {
        Portadas imprimir9;
        imprimir9.imprimir("horarioDomi.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30 AM a 08:30 AM";
        break;
    case 2:
        horario1="08:30 AM a 10:00 AM";
        break;
    case 3:
        horario1="10:30 AM a 12:00 PM";
        break;
    case 4:
        horario1="12:00 PM a 01:30 PM ";
        break;
    case 5:
        horario1="02:00 PM a 03:30 PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else
    {
        cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
    }
    system("cls");
    file.open("Asignaciones.txt", ios::app | ios::out);
	file <<std::left<<std::setw(15)<< codima <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< sede1 <<std::left<<std::setw(15)<< facu1 <<std::left<<std::setw(35)<< cursos1 <<std::left<<std::setw(15)<< jornada1 <<std::left<<std::setw(20)<< horario1 << "\n";
	file.close();


}

 void Asignacionesmac::mostrarasignacion(){

}

 void Asignacionesmac::modificarasignacion()
{

}

 void Asignacionesmac::buscarasignacion()
{

}

 void Asignacionesmac::borrarasignacion()
{
    //string facu1,sede1,cursos1,jornada1,horario1,codima,nombre,apellido;
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Baja (Borrado) del Empleado-------------------------"<<endl;
	file.open("Asignaciones.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese el codigo de la Persona que quiere borrar: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);

		file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;
		//file >> id >> sucursal >> name >> adress >> phone >> code >> contrasenas;
		while(!file.eof())
		{
			if(participant_id!= codima)
			{
                file <<std::left<<std::setw(15)<< codima <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< sede1 <<std::left<<std::setw(15)<< facu1 <<std::left<<std::setw(35)<< cursos1 <<std::left<<std::setw(15)<< jornada1 <<std::left<<std::setw(20)<< horario1 << "\n";

			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso";
			}
			file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Codigo Persona no encontrado...";
		}
		file1.close();
		file.close();
		remove("Asignaciones.txt");
		rename("Record.txt","Asignaciones.txt");
	}





}
