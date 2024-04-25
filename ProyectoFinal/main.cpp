//LIBRERIAS Y ENCABEZADOS
#include <iostream>
#include <unistd.h>
#include "Portadas.h"
#include "Usuario.h"
#include <string>
#include "Colegiatura.h"
#include "Facultades.h"
#include "Cursos.h"
#include"registros.h"
#include"Asignacionesca.h"
#include"Horarios.h"
#include"Jornada.h"
#include"registro_notas.h"




using namespace std;

int main()
{
    Portadas portadas;
    portadas .dibujarPortada("portada1.txt");

    bool accesoUsuario;
    Usuario usuarioRegistrado;

    //Llama al login de acceso
    accesoUsuario = usuarioRegistrado.loginUsuario();
    if (accesoUsuario)
        {
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
	cout<<"\t\t\t| 1. Catalogos                |"<<endl;
	cout<<"\t\t\t| 2. Procesos                 |"<<endl;
	cout<<"\t\t\t| 3. Reportes                 |"<<endl;
	cout<<"\t\t\t| 4. Ayuda                    |"<<endl;
	cout<<"\t\t\t| 5. Salir del Sistema        |"<<endl;
	cout<<"\t\t\t+-----------------------------+"<<endl;
	cout<<"\t\t\t|Opcion a escoger:[1/2/3/4/5] |"<<endl;
	cout<<"\t\t\t+-----------------------------+"<<endl;
	cout<<"\t\t\tIngresa tu Opcion: ";
        cin >> opciones;

        //Un switch para crear el meno tipo do while
        switch (opciones)
        {
        case 1:
            {

				//_____________________________________________________________________________________________________________

            	int opciones2;
				bool repetir2 = true;
				do
				{
					//Limpia pantalla
					system("cls");
					//imprime en pantalla
				system("cls");
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\t|              CATALOGOS             |"<<endl;
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\t| 1. Registro de Alumno/Catedratico  |"<<endl;
				cout<<"\t\t\t| 2. Registro de Facultad            |"<<endl;
				cout<<"\t\t\t| 3. Registro de cursos              |"<<endl;
				cout<<"\t\t\t| 4. Registro de Horarios            |"<<endl;
				cout<<"\t\t\t| 5. Registro de Jornada             |"<<endl;
				cout<<"\t\t\t| 6. Regresar el menu anterior       |"<<endl;
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\t| Opcion a escoger:[1/2/3/4/5]       |"<<endl;
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\tIngresa tu Opcion: ";
					cin >> opciones2;

				switch (opciones2)
					{
					case 1:
						{
							registros registrosAC;
							registrosAC.menu();
							break;
						}
					case 2:
						{
							Facultades facultad1;
			facultad1.menu();

							system("pause");
							break;
						}
						case 3:
						{
							Cursos cursos1;
    cursos1.menu();

							system("pause");
							break;
						}
						case 4:
						{
							  Horarios horario1;
    horario1.menu();break;
						}

							case 5:
						{
							  Jornada jornada1;
    jornada1.menu();
						}
							break;
						case 6:
							break;
					}
				} while (repetir2,opciones2!= 6);

				system("cls");
				//____________________________________________________________________________________________________________________

                break;
            }
        case 2:
            {
				//_____________________________________________________________________________________________________________
               int opciones2;
				bool repetir2 = true;
				do
				{
					//Limpia pantalla
					system("cls");
					//imprime en pantalla
				system("cls");
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\t|              PROCESOS              |"<<endl;
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\t| 1. Asignacion de cursos a alumnos  |"<<endl;
				cout<<"\t\t\t| 2. Asignacion de maestros a cursos |"<<endl;
				cout<<"\t\t\t| 3. Pago Colegiatura                |"<<endl;
				cout<<"\t\t\t| 4. Registro de notas               |"<<endl;
				cout<<"\t\t\t| 5. Pago de Certificados/Actas      |"<<endl;
				cout<<"\t\t\t| 6. Regresar el menu anterior       |"<<endl;
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\t| Opcion a escoger:[1/2/3/4/5/6]       |"<<endl;
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\tIngresa tu Opcion: ";
					cin >> opciones2;

				switch (opciones2)
					{
					case 1:
						{
							Asignacionesca Asignacion1;
    Asignacion1.menu();
							break;
						}
					case 2:
						{
							system("pause");
							break;
						}
						case 3:
						{
								Colegiatura colegiatura;
								colegiatura.menuColegiatura();
							system("pause");
							break;
						}
						case 4:
							{
								registro_notas registro1;
    registro1.menu();
							system("pause");
							break;
						}
							break;
							case 5:
							break;
						case 6:
							break;
					}
				} while (repetir2,opciones2!= 6);

				system("cls");

               //_____________________________________________________________________________________________________________________

                break;
            }
            case 3:
            {

                system("pause");
                break;
            }
			case 4:
                break;

			case 5: repetir = false;
                break;
        }
    } while (repetir);
    }
    system("cls");
    portadas.dibujarPortada("creditos.txt");
    return 0;
}
