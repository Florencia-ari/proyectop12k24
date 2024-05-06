#include <iostream>
#include <unistd.h>
#include "Jornada.h"
#include <string>

using namespace std;

int main()
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
            	//________________________________
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
				cout<<"\t\t\t| 1. jornada                         |"<<endl;
				cout<<"\t\t\t| 2. cursos                          |"<<endl;
				cout<<"\t\t\t| 3. Salir del menu                  |"<<endl;
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\t| Opcion a escoger:[1/2/3]           |"<<endl;
				cout<<"\t\t\t+------------------------------------+"<<endl;
				cout<<"\t\t\tIngresa tu Opcion: ";
				cin >> opciones2;

				switch (opciones2)
					{
					case 1:
						{
							Jornada jornada;
							jornada.ejecutarJornada();

		                system("pause");

						}
						break;
                    case 2:
						{

                        system("pause");

						}
						break;

						case 3:
						break;
					}
				} while (repetir2,opciones2!= 3);

				system("cls");
                break;
                //__________________________________


                break;
            }
        case 2:
            {

            }
            case 3:
            {


                break;
            }
			case 4:
                break;

			case 5: repetir = false;
                break;
        }
    } while (repetir);

    system("cls");
    return 0;
}
