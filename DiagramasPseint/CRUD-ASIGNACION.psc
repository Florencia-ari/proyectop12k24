Algoritmo asignacion_maestros_a_cursos
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
					Leer codigo;
					Escribir 'Ingrese Nombre Maestro ';
					Leer nombre;
					Escribir 'Ingrese Apellido Maestro ';
					Leer apellido;
					Escribir 'DESPLEGA ARCHIVO SEDES';
					Escribir 'Ingrese Sede';
					Leer sede;
					Escribir 'DESPLEGA ARCHIVO Aula.txt';
					Escribir 'Ingrese Aula';
					Leer aula;
					Escribir 'DESPLEGA ARCHIVO Secciones.txt';
					Escribir 'Ingrese seccion';
					Leer seccion;
					Escribir 'DESPLEGA ARCHIVO facultades.txt';Escribir 'Ingrese facultad';
					Leer facultad;
					Escribir 'DESPLEGA ARCHIVO carreras.txt';
					Escribir 'Ingrese carrera';
					Leer carrera;
					Escribir 'DESPLEGA ARCHIVO cursos.txt';
					Escribir 'Ingrese curso';
					Leer curso;
					Escribir 'DESPLEGA ARCHIVO jornada.txt';
					Escribir 'Ingrese jornada';
					Leer curso;
					Escribir 'DESPLEGA ARCHIVO horarios.txt';
					Escribir 'Ingrese horario';
					Leer curso;
					Escribir '+-------------------------------+';
					Escribir 'ASIGNACION COMPLETA DE ',nombre ,' ', apellido;
					Escribir '+-------------------------------+';
					Escribir 'El catedratico ',nombre ,' ', apellido,' se asigno al curso de ',curso;
					Escribir 'Desea asignar otro curso a maestro? (s/n)  ';
					Leer x;
				Hasta Que (x='n' o x='N') 
				
			2:
				Escribir'MUESTRA TODAS LAS  ASIGNACIONES DE ARCHIVO ASIGNACIONES.TXT';				
			3:
				
			4:
				
			5:
			De Otro Modo:
				
		Fin Segun
		
	Hasta Que opcion <> 6
FinAlgoritmo
