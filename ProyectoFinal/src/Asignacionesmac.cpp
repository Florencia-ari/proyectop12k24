#include "Asignacionesmac.h"
#include <fstream>
#include <unistd.h>
#include <fstream>
#include <iostream>
#include "Portadas.h"
#include "Menu_catedratico.h"
#include "Facultad.h"
#include "Cursos.h"



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
    cout<<"\n----------------------------------------------------------------------------------";
	cout<<"\n|                             Asignarse a un curso                               |";
    cout<<"\n----------------------------------------------------------------------------------"<<endl;
	//Ingreso de datos
	cout<<"\n\t\t\tIngrese Codigo de maestro : ";
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
        sede1="Villa_Nueva";
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
        cursos1="Fisica_I";
        break;
    case 2:
        cursos1="Programacion_I";
        break;
    case 3:
        cursos1="Calculo_I";
        break;
    case 4:
        cursos1="Proceso_Administrativo";
        break;
    case 5:
        cursos1="Derecho_Informatico";
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
        cursos1="Derecho_Romano";
        break;
    case 2:
        cursos1="Derecho_Civil";
        break;
    case 3:
        cursos1="Derecho_Penal";
        break;
    case 4:
        cursos1="Derecho_Mercantil";
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
        cursos1="Dibujo_Arquitectonico_II";
        break;
    case 2:
        cursos1="Tecnicas_De_Presentacion";
        break;
    case 3:
        cursos1="Diseno_Arquitectonico_II";
        break;
    case 4:
        cursos1="Materiales_De_Construccion";
        break;
    case 5:
        cursos1="Metodos_De_Investigacion";
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
	if (jornada==1)
    {
        Portadas imprimir6;
        imprimir6.imprimir("horarioMatu.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30_AM_a_08:30_AM";
        break;
    case 2:
        horario1="08:30_AM_a_10:00_AM";
        break;
    case 3:
        horario1="10:30_AM_a_12:00_PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(jornada==2)
    {
        Portadas imprimir7;
        imprimir7.imprimir("horarioVesp.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="05:00_PM_a_06:30_PM";
        break;
    case 2:
        horario1="06:30_PM_a_08:00_PM";
        break;
    case 3:
        horario1="08:30_PM_a_10:00_PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(jornada==3)
    {
        Portadas imprimir8;
        imprimir8.imprimir("horarioSaba.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30_AM_a_08:30_AM";
        break;
    case 2:
        horario1="08:30_AM_a_10:00_AM";
        break;
    case 3:
        horario1="10:30_AM_a_12:00_PM";
        break;
    case 4:
        horario1="12:00_PM_a_01:30_PM";
        break;
    case 5:
        horario1="02:00_PM_a_03:30_PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(jornada==4)
    {
        Portadas imprimir9;
        imprimir9.imprimir("horarioDomi.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30_AM_a_08:30_AM";
        break;
    case 2:
        horario1="08:30_AM_a_10:00_AM";
        break;
    case 3:
        horario1="10:30_AM_a_12:00_PM";
        break;
    case 4:
        horario1="12:00_PM_a_01:30_PM";
        break;
    case 5:
        horario1="02:00_PM_a_03:30_PM";
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

 void Asignacionesmac::mostrarasignacion()
{
    string facu1,sede1,cursos1,jornada1,horario1,codima,nombre,apellido;
    system("cls");
	fstream file;
	int total=0;
	cout<<"\n-------------------------Imprimir Informe de Asignaciones-------------------------"<<endl;
	file.open("Asignaciones.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay información...";
		file.close();
	}
	else
	{
        file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;

		while(!file.eof())
		{
			total++;
			cout<<"\n\t\t\t     Codigo Maestro         : "<<codima<<endl;
			cout<<"\t\t\t     Nombre Maestro         : "<<nombre<<endl;
			cout<<"\t\t\t     Apellido Maestro       : "<<apellido<<endl;
			cout<<"\t\t\t     Sede                   : "<<sede1;
			cout<<"\n\t\t\t     Facultad               : "<<facu1;
			cout<<"\n\t\t\t     Curso                  : "<<cursos1<<endl;
            cout<<"\t\t\t     Jornada                : "<<jornada1<<endl;
			cout<<"\t\t\t     Horario                : "<<horario1<<endl<<endl<<endl;
            file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;

		}
		if(total==0)
		{
			cout<<"\n\t\t\tNo hay informacion...";
		}
	}
	file.close();
}

 void Asignacionesmac::modificarasignacion()
{
    system("cls");
    string facu1,sede1,cursos1,jornada1,horario1,codima,nombre,apellido;
    int facu,sede,cursos,jornada,horario;
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n------------------------Modificacion de Asignaciones-----------------------"<<endl;
	file.open("Asignaciones.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion..,";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese Codigo de Maestro para modificar su Asignacion: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
        file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;
		while(!file.eof())
		{
			if(participant_id!=codima)
			{
             file1<<std::left<<std::setw(15)<< codima <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< sede1 <<std::left<<std::setw(15)<< facu1 <<std::left<<std::setw(35)<< cursos1 <<std::left<<std::setw(15)<< jornada1 <<std::left<<std::setw(20)<< horario1 << "\n";
			}
			else
			{
			    //inicia captura de datos, igual que en el ingreso, (bloque reutilizado)


				cout<<"\n\t\t\tIngrese Codigo de maestro : ";
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
        sede1="Villa_Nueva";
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
        cursos1="Fisica_I";
        break;
    case 2:
        cursos1="Programacion_I";
        break;
    case 3:
        cursos1="calculo_I";
        break;
    case 4:
        cursos1="Proceso_Administrativo";
        break;
    case 5:
        cursos1="Derecho_Informatico";
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
        cursos1="Derecho_Romano";
        break;
    case 2:
        cursos1="Derecho_Civil";
        break;
    case 3:
        cursos1="Derecho_Penal";
        break;
    case 4:
        cursos1="Derecho_Mercantil";
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
        cursos1="Dibujo_Arquitectonico_II";
        break;
    case 2:
        cursos1="Tecnicas_de_Presentacion";
        break;
    case 3:
        cursos1="Diseno_Arquitectonico_II";
        break;
    case 4:
        cursos1="Materiales_de_Construccion";
        break;
    case 5:
        cursos1="Metodos_de_Investigacion";
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
	if (jornada==1)
    {
        Portadas imprimir6;
        imprimir6.imprimir("horarioMatu.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30_AM_a_08:30_AM";
        break;
    case 2:
        horario1="08:30_AM_a_10:00_AM";
        break;
    case 3:
        horario1="10:30_AM_a_12:00_PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(jornada==2)
    {
        Portadas imprimir7;
        imprimir7.imprimir("horarioVesp.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="05:00_PM_a_06:30_PM";
        break;
    case 2:
        horario1="06:30_PM_a_08:00_PM";
        break;
    case 3:
        horario1="08:30_PM_a_10:00_PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(jornada==3)
    {
        Portadas imprimir8;
        imprimir8.imprimir("horarioSaba.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30_AM_a_08:30_AM";
        break;
    case 2:
        horario1="08:30_AM_a_10:00_AM";
        break;
    case 3:
        horario1="10:30_AM_a_12:00_PM";
        break;
    case 4:
        horario1="12:00_PM_a_01:30_PM";
        break;
    case 5:
        horario1="02:00_PM_a_03:30_PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else if(jornada==4)
    {
        Portadas imprimir9;
        imprimir9.imprimir("horarioDomi.txt");
        cout<<"\t\t\tIngrese opcion de Horario: ";
        cin>>horario;
        switch(horario){
    case 1:
        horario1="07:30_AM_a_08:30_AM";
        break;
    case 2:
        horario1="08:30_AM_a_10:00_AM";
        break;
    case 3:
        horario1="10:30_AM_a_12:00_PM";
        break;
    case 4:
        horario1="12:00_PM_a_01:30_PM";
        break;
    case 5:
        horario1="02:00_PM_a_03:30_PM";
        break;
        default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
    }else
    {
        cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
    }
    system("cls");


                //termina captura de datos, se mandan a file1
                file1<<std::left<<std::setw(15)<< codima <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< sede1 <<std::left<<std::setw(15)<< facu1 <<std::left<<std::setw(35)<< cursos1 <<std::left<<std::setw(15)<< jornada1 <<std::left<<std::setw(20)<< horario1 << "\n";
				found++;
			}
            file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;
		}
		file1.close();
		file.close();
		remove("Asignaciones.txt");
		rename("Record.txt","Asignaciones.txt");
	}
}

 void Asignacionesmac::buscarasignacion()
{
    system("cls");
    string facu1,sede1,cursos1,jornada1,horario1,codima,nombre,apellido;
	fstream file;
	int found=0;
	file.open("Asignaciones.txt",ios::in);
	if(!file)
	{
		cout<<"\n----------------------Datos de Asignacion Buscada---------------------"<<endl;
		cout<<"\n\t\t\tNo hay informacion...";
	}
	else
	{
		string participant_id;
		cout<<"\n----------------------Datos de Asignacion Buscada---------------------"<<endl;
		cout<<"\nIngrese Codigo del Maestro para buscar su Asignacion: ";
		cin>>participant_id;
		file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;
		while(!file.eof())
		{
			if(participant_id==codima)
			{
				cout<<"\n\n"<<endl;
				cout<<"\t\t Busqueda Exitosa!" << endl;
				cout<<"\n\n"<<endl;
				cout<<"\n\t\t\t Codigo            : "<<codima<<endl;
                cout<<"\t\t\t Nombre            : "<<nombre<<endl;
                cout<<"\t\t\t Apellido          : "<<apellido<<endl;
                cout<<"\t\t\t Sede              : "<<sede1<<endl;
                cout<<"\t\t\t Facultad          : "<<facu1<<endl;
                cout<<"\t\t\t Curso             : "<<cursos1<<endl;
                cout<<"\t\t\t Jornada           : "<<jornada1<<endl;
                cout<<"\t\t\t Horario           : "<<horario1<<endl<<endl<<endl;
				found++;
			}
            file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;
		}
		if(found==0)
		{
			cout<<"\n\t\t\t Asignacion no encontrada...";
		}
		file.close();
	}
}

 void Asignacionesmac::borrarasignacion()
{
    string facu1,sede1,cursos1,jornada1,horario1,codima,nombre,apellido;
	system("cls");
	fstream file,file1;
	string participant_id;
	int found=0;
	cout<<"\n-------------------------Baja (Borrado) de Asignaciones-------------------------"<<endl;
	file.open("Asignaciones.txt",ios::in);
	if(!file)
	{
		cout<<"\n\t\t\tNo hay informacion...";
		file.close();
	}
	else
	{
		cout<<"\n Ingrese codigo de Maestro para borrar la Asignacion: ";
		cin>>participant_id;
		file1.open("Record.txt",ios::app | ios::out);
		file >> codima >> nombre >> apellido >> sede1 >> facu1 >> cursos1 >> jornada1 >> horario1;
		while(!file.eof())
		{
			if(participant_id!= codima)
			{
                file1<<std::left<<std::setw(15)<< codima <<std::left<<std::setw(15)<< nombre <<std::left<<std::setw(15)<< apellido <<std::left<<std::setw(15)<< sede1 <<std::left<<std::setw(15)<< facu1 <<std::left<<std::setw(35)<< cursos1 <<std::left<<std::setw(15)<< jornada1 <<std::left<<std::setw(20)<< horario1 << "\n";

			}
			else
			{
				found++;
				cout << "\n\t\t\tBorrado de informacion exitoso, ";
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
