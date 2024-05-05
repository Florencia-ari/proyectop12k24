#include "Menu_catedratico.h"
#include "Usuario_Catedratico.h"
#include "Asignacionesmac.h"
#include "Portadas.h"
#include "Facultad.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>

using namespace std;
Menu_catedratico::Menu_catedratico()
{
}

void Menu_catedratico::Menu_P()
{

 //variables de user y contraseñan
    string user,contrasena;
    //llmamos al objeto e ingresamos los parametros
    Usuario_Catedratico ingreso(user,contrasena);


    //creamos un bool  que verifique y despliegue el metodo verificarUsuario
    bool UsuarioCorrecto=ingreso.VerificarUsuario();


    //luego de ingresar con usuario y contraseña se nos desplega otro menu
    if(UsuarioCorrecto)
    {
        int opcion;
        char  x;
        do
        {
        	system("cls");

    cout<<"\t\t\t+------------------------------------------+"<<endl;
    cout<<"\t\t\t|      BIENVENIDO AL MENU CATEDRATICO      |"<<endl;
    cout<<"\t\t\t+------------------------------------------+"<<endl;
	cout<<"\t\t\t|1. Asignacion De Cursos                   |"<<endl;
	cout<<"\t\t\t|2. Exit                                   |"<<endl;
	cout<<"\t\t\t+------------------------------------------+"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2]                    |"<<endl;
	cout<<"\t\t\t+------------------------------------------+"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
    cin>>opcion;

    switch(opcion){
    case 1:
    	Asignacionesmac asignacionesmac1;
		asignacionesmac1.menuasignacion();
        break;

    case 2:
        break;
	default:
		cout<<"\n\t\t\t Opcion invalida...Por favor prueba otra vez..";
        break;}
        }while(opcion!= 2);

    }

}

