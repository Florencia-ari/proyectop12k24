Algoritmo ejercicio_4
	Repetir
		Escribir '+-------------------------------+';
		Escribir 'ASIGNACION MAESTRO A CURSO ';
		Escribir '+-------------------------------+';
		Escribir '1. Ingreso Asignacion         ';
		Escribir '2. Despliegue Asignaciones    ';
		Escribir '3. Modificar Asignacion       ';
		Escribir '4. Buscar Asignacion          ';
		Escribir '5. Borrar Asignacion          ';
		Escribir '6. Salir del Menu            ';
		Escribir '+-------------------------------+';
		Escribir 'Ingresa una Opcion: ';
		Leer opcion;
		Segun opcion Hacer
			1:
				Repetir
					Escribir '+-------------------------------+';
					Escribir '+      Asignarse a un Curso     +';
					Escribir '+-------------------------------+';
					Escribir 'Ingrese Codigo Maestro ';
					Leer codima;
					Escribir 'Ingrese Nombre Maestro ';
					Leer nombre;
					Escribir 'Ingrese Apellido Maestro ';
					Leer apellido;
					Escribir 'DESPLEGA ARCHIVO SEDES';
					Escribir 'Ingrese Sede';
					Leer sede;
					Segun sede Hacer
						1:
							sede1<-'Portales';
						2:
							sede1<-'Villa Nueva';
						3:
							sede1<-'Peten';
						4:
							sede1<-'Chiquimula';
						5:
							sede1<-'Sanarate';
						De Otro Modo:
							Escribir 'Opcion invalida...Por favor prueba otra vez..';
					Fin Segun
					Escribir 'DESPLEGA ARCHIVO Aula.txt';
					Escribir 'Ingrese Aula';
					Leer aula;
					Segun aula Hacer
						1:
							aula1<-'C001';
						2:
							aula1<-'C002';
						3:
							aula1<-'C003';
						4:
							aula1<-'C004';
						5:
							aula1<-'C005';
						De Otro Modo:
							Escribir 'Opcion invalida...Por favor prueba otra vez..';
					Fin Segun
					Escribir 'DESPLEGA ARCHIVO Secciones.txt';
					Escribir 'Ingrese opcion de secciones';
					Leer seccion;
					Segun seccion Hacer
						1:
							seccion1<-'A';
						2:
							seccion1<-'B';
						3:
							seccion1<-'C';
						4:
							seccion1<-'D';
						5:
							seccion1<-'E';
						De Otro Modo:
							Escribir 'Opcion invalida...Por favor prueba otra vez..';
					Fin Segun
					Escribir 'DESPLEGA ARCHIVO FACULTAD';
					Escribir 'Ingrese una opcion de facultad';
					Leer facu;
					Segun facu Hacer
						1:
							facu1<-'Ingenieria';
						2:
							facu1<-'Derecho';
						3:
							facu1<-'Arquitectura';
						De Otro Modo:
							Escribir 'Opcion invalida...Por favor prueba otra vez..';
					Fin Segun
					Segun facu Hacer
						1:
							Escribir 'DESPLEGA ARCHIVO CarreraING';
							Escribir 'Ingrese una opcion de curso';
							Leer carrera;
							Segun carrera Hacer
								1:
									carrera1<-'Ingenieria_en_sistemas';
								2:
									carrera1<-'Ingenieria_Industrial';
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
							Segun carrera Hacer
								1:
									Escribir 'DESPLEGA ARCHIVO CURSOINGSIS.txt';
									Escribir 'Ingrese una opcion de curso';
									Leer cursos;
									Segun cursos Hacer
										1:
											cursos1<-'Fisica_I';
										2:
											cursos1<-'Programacion_I';
										3:
											cursos1<-'Calculo_I';
										De Otro Modo:
											Escribir 'Opcion invalida...Por favor prueba otra vez..';
									Fin Segun
								2:
									Escribir 'DESPLEGA ARCHIVO CURSOINGIND.txt';
									Escribir 'Ingrese una opcion de curso';
									Leer cursos;
									Segun cursos Hacer
										1:
											cursos1<-'Fisica_I';
										2:
											cursos1<-'Proceso_Administrativo';
										3:
											cursos1<-'Calculo_I';
										De Otro Modo:
											Escribir 'Opcion invalida...Por favor prueba otra vez..';
									Fin Segun
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
							
						2:
							Escribir 'DESPLEGA ARCHIVO CarreraCiJ';
							Escribir 'Ingrese una opcion de curso';
							Leer carrera;
							Segun carrera Hacer
								1:
									carrera1<-'Derecho';
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
							Segun carrera Hacer
								1:
									Escribir 'DESPLEGA ARCHIVO CURSOSENF';
									Escribir 'Ingrese una opcion de curso';
									Leer cursos;
									Segun cursos Hacer
										1:
											cursos1<-'Derecho_Romano';
										2:
											cursos1<-'Derecho_Civil';
										3:
											cursos1<-'Derecho_Penal';
										4:
											cursos1<-'Derecho_Mercantil';
										5:
											cursos1<-'Sociologia';
										De Otro Modo:
											Escribir 'Opcion invalida...Por favor prueba otra vez..';
									Fin Segun
								2:
									
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
							
							
						3:
							Escribir 'DESPLEGA ARCHIVO CarreraArqui.txt';
							Escribir 'Ingrese una opcion de carrera';
							Leer carrera;
							Segun carrera Hacer
								1:
									carrera1<-'Arquitectura';
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
							
							Segun carrera Hacer
								1:
									Escribir 'DESPLEGA ARCHIVO CURSOSARQUI';
									Escribir 'Ingrese una opcion de curso';
									Leer cursos;
									Segun cursos Hacer
										1:
											cursos1<-'Dibujo_Arquitectonico_II';
										2:
											cursos1<-'Tecnicas_De_Presentacion';
										3:
											cursos1<-'Diseno_Arquitectonico_II';
										4:
											cursos1<-'Materiales_De_Construccion';
										5:
											cursos1<-'Metodos_De_Investigacion';
										6:
											cursos1<-'Ecologia';
										De Otro Modo:
											Escribir 'Opcion invalida...Por favor prueba otra vez..';
									Fin Segun
								2:
									
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
							
						De Otro Modo:
							Escribir 'Opcion invalida...Por favor prueba otra vez..';
					Fin Segun
					Escribir 'DESPLEGA ARCHIVO JORNADA.TXT';
					Escribir 'Ingrese opcion de Jornada';
					Leer jornada;
					Segun jornada Hacer
						1:
							jornada1<-'Matutina';
						2:
							jornada1<-'Vespertina';
						3:
							jornada1<-'Sabado';
						4:
							jornada1<-'Domingo';
						De Otro Modo:
							Escribir 'Opcion invalida...Por favor prueba otra vez..';
					Fin Segun
					Segun jornada Hacer
						1:
							Escribir 'DESPLEGA ARCHIVO HorariosMatu.txt';
							Escribir 'Ingrese una opcion de horario';
							Leer horario;
							Segun horario Hacer
								1:
									horario1<-'07:30_AM_a_08:30_AM';
								2:
									horario1<-'08:30_AM_a_10:00_AM';
								3:
									horario1<-'10:30_AM_a_12:00_PM';
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
						2:
							Escribir 'DESPLEGA ARCHIVO HorariosVesp.txt';
							Escribir 'Ingrese una opcion de horario';
							Leer horario;
							Segun horario Hacer
								1:
									horario1<-'05:00_PM_a_06:30_PM';
								2:
									horario1<-'06:30_PM_a_08:00_PM';
								3:
									horario1<-'08:30_PM_a_10:00_PM';
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
						3:
							Escribir 'DESPLEGA ARCHIVO HorarioSaba.txt';
							Escribir 'Ingrese una opcion de horario';
							Leer horario;
							Segun horario Hacer
								1:
									horario1<-'07:30_AM_a_08:30_AM';
								2:
									horario1<-'08:30_AM_a_10:00_AM';
								3:
									horario1<-'10:30_AM_a_12:00_PM';
								4:
									horario1<-'12:00_PM_a_01:30_PM';
								5:
									horario1<-'02:00_PM_a_03:30_PM';
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
						4:
							Escribir 'DESPLEGA ARCHIVO HorarioDomi.txt';
							Escribir 'Ingrese una opcion de horario';
							Leer horario;
							Segun horario Hacer
								1:
									horario1<-'07:30_AM_a_08:30_AM';
								2:
									horario1<-'08:30_AM_a_10:00_AM';
								3:
									horario1<-'10:30_AM_a_12:00_PM';
								4:
									horario1<-'12:00_PM_a_01:30_PM';
								5:
									horario1<-'02:00_PM_a_03:30_PM';
								De Otro Modo:
									Escribir 'Opcion invalida...Por favor prueba otra vez..';
							Fin Segun
						De Otro Modo:
							Escribir 'Opcion invalida...Por favor prueba otra vez..';
					Fin Segun
					Escribir 'INGRESA VARIABLES facu1,carrera1,cursos1,jornada1,aula1,seccion1,sede1,horario1 A ARCHIVO ASIGNACIONES.TXT';

					Escribir 'Desea asignar otro curso a maestro? (s/n)  ';
					Leer x;
				Hasta Que (x='n' o x='N')
			2:
				Escribir'MUESTRA ASIGNACIONES DE ARCHIVO ASIGNACIONES.TXT';
				
			3:
				
			De Otro Modo:
				
		Fin Segun
		
	Hasta Que opcion <> 6
FinAlgoritmo
