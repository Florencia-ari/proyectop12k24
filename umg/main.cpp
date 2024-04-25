#include <iostream>
#include <unistd.h>
#include "Portadas.h"
#include <string>

using namespace std;

int main()
{
    Portadas portadas;
    portadas .dibujarPortada("portada.txt");


    int opciones;
    bool repetir = true;
    do
    {
        //Limpia pantalla
        system("cls");
        //imprime en pantalla
	cout<<"\t\t\t+-----------------------------+"<<endl;
	cout<<"\t\t\t|         SISTEMA UMG         |"<<endl;
	cout<<"\t\t\t+-----------------------------+"<<endl;
	cout<<"\t\t\t| Selecciona tipo de usuario  |"<<endl;
	cout<<"\t\t\t|                             |"<<endl;
	cout<<"\t\t\t| 1. Administrador            |"<<endl;
	cout<<"\t\t\t| 2. Catedratico              |"<<endl;
	cout<<"\t\t\t| 3. Alumno                   |"<<endl;
	cout<<"\t\t\t| 4. Salir del sistema        |"<<endl;
	cout<<"\t\t\t+-----------------------------+"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2/3/4]   |"<<endl;
	cout<<"\t\t\t+-----------------------------+"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
	cin >> opciones;

        switch (opciones)
        {
        case 1:
            {
            	//oscar


                break;
            }
        case 2:
            {
            	//florencia

                break;
            }
            case 3:
            {
            	//isabel

                system("pause");
                break;
            }
			case 4:repetir = false;
                break;

        }
    } while (repetir);

    system("cls");
   //creditos
    //portadas.dibujarPortada("creditos.txt");
    return 0;
}
