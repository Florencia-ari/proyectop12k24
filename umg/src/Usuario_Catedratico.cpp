#include "Usuario_Catedratico.h"
#include<iostream>
#include<fstream>
#include<stdlib.h>
#include<cstdlib>
#include<conio.h>
#include<iomanip>
using namespace std;

Usuario_Catedratico::Usuario_Catedratico(string usuario, string contrasena)//parametros de la clase
{
    this -> usuarios=usuarios;
    this -> contrasena=contrasena;
}

string Usuario_Catedratico::setUser(string usuarios)
{
    this -> usuarios=usuarios;
}

string Usuario_Catedratico::getUser()
{
    return this->usuarios;
}

string Usuario_Catedratico::setContrasena(string contrasena)
{
    this -> contrasena=contrasena;
}

string Usuario_Catedratico::getContrasena()
{
    return this->contrasena;
}

//primer despliegue de pantalla
bool Usuario_Catedratico::VerificarUsuario()
{
    string usuario,contrasena;
    int contador= 0; // contador de intentos
    bool encontrado =false; // indica si encontro user y contra

    //el ciclo se repite mientras el numero de intentos sea menor a 3 o no se encuentre user valido
    while(contador<3 && !encontrado)
    {
         system("cls");
    cout <<"\t\t\t--------------------"<<endl;
    cout <<"\t\t\t| LONGIN CATEDRATICO|"<<endl;
    cout <<"\t\t\t---------------------"<<endl;

    // Mostrar mensaje de advertencia
    cout <<"\n\t\tSolo tienes permitido 3 intentos"<<endl;
    cout <<"\t\t----------------------------------"<<endl;


    cout << "\t\Ingrese el nombre de usuario:       ";
    cin >> usuario;
    cout << "\t\Ingrese la contrasena:              ";
    char caracter;
    caracter = getch();

    // ocultar a la hora de escribir la contraseña
    contrasena="";
        while (caracter!=13)//ascci enter
        {
        if(caracter !=8)//ascci backs pace
            {
                contrasena.push_back(caracter);
                cout<<"*";
            }
        else
            {
                if(contrasena.length()>0)
                {
                    cout<<"\b \b";
                    contrasena=contrasena.substr(0,contrasena.length()-1);
                }
            }
            caracter=getch();
        }

    //abrira el archivo de User y contraseñas--------------------------
    ifstream fileU_P;
    fileU_P.open("usuarios_y_contrasenas prueba.txt",ios::in);


    //verificar si se abrio el archivo---------------------------
    if (!fileU_P)
    {
        cout<<"No es posible abrir el archivo."<<endl;
        fileU_P.close();
        return false;
    }

    //busca el usuario en el archivo---------------------------------
    string user,pass;
    while (fileU_P>>user>>pass)
    {
        if (user==usuario && pass==contrasena)
        {
            encontrado=true;
            break;
        }
    }
     fileU_P.close();

    //si no encuentra user y pass , el contador incrementara------------------------
    if(!encontrado)
    {
        cout << "\n\tUSUARIO Y/O CONTRASEÑA INCORRECTOS" << endl;
        cout << "\n\tPerdio un intento, Intente de nuevo" << endl;
        contador++;
        system("pause");
    }
}

    //Si encuentra a user y pass , se retornara un true
   if (encontrado)
    {
    cout << "\n\tBienvenido " << usuario << "!" << endl;
    return true;
    }
   else
    {
    cout << "\n\tPERDIO LOS 3 INTENTOS" << endl;
    cout << "\n\tNO PODRA INGRESAR MAS INTENTOS" << endl;
    return false;
    }





}
