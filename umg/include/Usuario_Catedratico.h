#ifndef USUARIO_CATEDRATICO_H
#define USUARIO_CATEDRATICO_H
#include<iostream>
#include<fstream>
#include<string>
 using namespace std;

class Usuario_Catedratico
{
 public:
        Usuario_Catedratico(string usuarios,string contrasena);

        string setUser(string usuarios);
        string getUser();

        string setContrasena(string contrasena);
        string getContrasena();


        bool VerificarUsuario();


    private:
        string usuarios,contrasena;

};
#endif // USUARIO_CATEDRATICO_H

