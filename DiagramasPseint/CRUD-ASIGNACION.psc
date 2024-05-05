Algoritmo asignacion_maestros_a_cursos
	Repetir
		Limpiar Pantalla;
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
		Seg�n opcion Hacer
			1:
				Repetir
					Limpiar Pantalla;
					Escribir '+-------------------------------+';
					Escribir '+      Asignarse a un Curso     +';
					Escribir '+-------------------------------+';
					Escribir 'Ingrese Codigo Maestro ';
					Leer codigo;
					Escribir 'Ingrese Nombre Maestro ';
					Leer nombre;
					Escribir 'Ingrese Apellido Maestro ';
					Leer apellido;
					Escribir 'DESPLIEGA ARCHIVO SEDES';
					Escribir 'Ingrese Sede';
					Leer sede;
					Escribir 'DESPLIEGA ARCHIVO Aula.txt';
					Escribir 'Ingrese Aula';
					Leer aula;
					Escribir 'DESPLIEGA ARCHIVO Secciones.txt';
					Escribir 'Ingrese seccion';
					Leer seccion;
					Escribir 'DESPLIEGA ARCHIVO facultades.txt';
					Escribir 'Ingrese facultad';
					Leer facultad;
					Escribir 'DESPLIEGA ARCHIVO carreras.txt';
					Escribir 'Ingrese carrera';
					Leer carrera;
					Escribir 'DESPLIEGA ARCHIVO cursos.txt';
					Escribir 'Ingrese curso';
					Leer curso;
					Escribir 'DESPLIEGA ARCHIVO jornada.txt';
					Escribir 'Ingrese jornada';
					Leer jornada;
					Escribir 'DESPLIEGA ARCHIVO horarios.txt';
					Escribir 'Ingrese horario';
					Leer horario;
					Escribir '+-------------------------------+';
					Escribir 'ASIGNACION COMPLETA DE ', nombre, ' ', apellido;
					Escribir '+-------------------------------+';
					Escribir 'El catedratico ', nombre, ' ', apellido, ' se asigno al curso de ', curso;
					Escribir 'Desea asignar otro curso a maestro? (s/n)  ';
					Leer x;
				Hasta Que (x='n' O x='N')
			2:
				Limpiar Pantalla;
				Escribir 'MUESTRA TODAS LAS  ASIGNACIONES DE ARCHIVO ASIGNACIONES.TXT';
			3:
				Repetir
					Limpiar Pantalla;
					Escribir '+----------------------------+';
					Escribir '+    Modificar Asignaci�n    +';
					Escribir '+----------------------------+';
					Escribir 'Ingrese Codigo de Maestro a buscar';
					Leer buscar;
					Escribir 'REALIZA BUSQUEDA EN LOS REGISTROS DE ARCHIVO ASIGNACIONES.TXT';
					Escribir 'Asignacion encontrada... Modifique los datos que desee';
					Escribir 'Ingrese Codigo Maestro ';
					Leer codigo;
					Escribir 'Ingrese Nombre Maestro ';
					Leer nombre;
					Escribir 'Ingrese Apellido Maestro ';
					Leer apellido;
					Escribir 'DESPLIEGA ARCHIVO SEDES';
					Escribir 'Ingrese Sede';
					Leer sede;
					Escribir 'DESPLIEGA ARCHIVO Aula.txt';
					Escribir 'Ingrese Aula';
					Leer aula;
					Escribir 'DESPLIEGA ARCHIVO Secciones.txt';
					Escribir 'Ingrese seccion';
					Leer seccion;
					Escribir 'DESPLIEGA ARCHIVO facultades.txt';
					Escribir 'Ingrese facultad';
					Leer facultad;
					Escribir 'DESPLIEGA ARCHIVO carreras.txt';
					Escribir 'Ingrese carrera';
					Leer carrera;
					Escribir 'DESPLIEGA ARCHIVO cursos.txt';
					Escribir 'Ingrese curso';
					Leer curso;
					Escribir 'DESPLEGA ARCHIVO jornada.txt';
					Escribir 'Ingrese jornada';
					Leer jornada;
					Escribir 'DESPLIEGA ARCHIVO horarios.txt';
					Escribir 'Ingrese horario';
					Leer horario;
					Escribir '+-------------------------------+';
					Escribir 'MODIFICACION COMPLETA DE ', nombre, ' ', apellido;
					Escribir '+-------------------------------+';
					Escribir 'El catedratico ', nombre, ' ', apellido, ' se asigno al curso de ', curso;
					Escribir 'Desea modificar otra asignaci�n? (s/n)  ';
					Leer x;
				Hasta Que (x='n' O x='N')
			4:
				Repetir
					Limpiar Pantalla;
					Escribir '+-----------------------------+';
					Escribir '+      Buscar Asignaci�n      +';
					Escribir '+-----------------------------+';
					Escribir 'Ingrese Codigo de Maestro';
					Leer buscar;
					Escribir 'REALIZA BUSQUEDA EN LOS REGISTROS DE ARCHIVO ASIGNACIONES.txt';
					// Si buscar = codigo... Entonces
					Escribir 'Asignacion encontrada...';
					Escribir 'ABRE ARCHIVO ASIGNACIONES.txt Y DESPLIEGA SOLO EL REGISTRO ENCONTRADO CON SUS CAMPOS';
					Escribir 'Desea buscar otra asignaci�n? (s/n)  ';
					Leer x;
				Hasta Que (x='n' O x='N')
			5:
				Repetir
					Limpiar Pantalla;
					Escribir '+-----------------------------+';
					Escribir '+      Borrar Asignaci�n      +';
					Escribir '+-----------------------------+';
					Escribir 'Ingrese un Codigo de Maestro para borrar su Asignaci�n';
					Leer buscar;
					Escribir 'REALIZA BUSQUEDA EN LOS REGISTROS DE ARCHIVO ASIGNACIONES.txt';
					// Si buscar = codigo... Entonces
					Escribir 'Asignacion encontrada...';
					Escribir 'ABRE ARCHIVO ASIGNACIONES.txt Y DESPLIEGA SOLO EL REGISTRO ENCONTRADO CON SUS CAMPOS';
					Escribir '(!) �Desea eliminar esta asignaci�n? (s/n) ';
					Leer confirmacion;
					Si confirmacion='S' O confirmacion='s' Entonces
						Escribir 'La Asignacion fue eliminada correctamente...';
					SiNo
						Escribir 'Instruccion cancelada...';
					FinSi
					Escribir 'Desea eliminar otra asignaci�n? (s/n)  ';
					Leer x;
				Hasta Que (x='n' O x='N')
		FinSeg�n
	Hasta Que opcion<>5
FinAlgoritmo
