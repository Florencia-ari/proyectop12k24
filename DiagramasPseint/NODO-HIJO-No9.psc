Algoritmo sin_titulo
	//HECHO POR KATHIA CONTRERAS 9959-23-8246
	facultad <- 'facultad.dat';
	jornada <- 'jornada.dat';
	cursos <- 'cursos.dat';
	seccion <- 'seccion.dat';
	horario <- 'horario.dat';
	carrera <- 'carrera.dat';
	carrera <- 'sede.dat';
	Si facultad<>'' Y carrera<>'' Y jornada<>'' Y horario<>'' Y seccion<>'' Y cursos<>'' Y sede<>'' Entonces
		Escribir 'DATOS VERIFICADOS';
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
			Escribir 'DESPLIEGA ARCHIVO Aula.dat';
			Escribir 'Ingrese Aula';
			Leer aula;
			Escribir 'DESPLIEGA ARCHIVO Secciones.dat';
			Escribir 'Ingrese seccion';
			Leer seccion;
			Escribir 'DESPLIEGA ARCHIVO facultades.dat';
			Escribir 'Ingrese facultad';
			Leer facultad;
			Escribir 'DESPLIEGA ARCHIVO carreras.dat';
			Escribir 'Ingrese carrera';
			Leer carrera;
			Escribir 'DESPLIEGA ARCHIVO cursos.dat';
			Escribir 'Ingrese curso';
			Leer curso;
			Escribir 'DESPLIEGA ARCHIVO jornada.dat';
			Escribir 'Ingrese jornada';
			Leer jornada;
			Escribir 'DESPLIEGA ARCHIVO horarios.dat';
			Escribir 'Ingrese horario';
			Leer horario;
			Escribir '+-------------------------------+';
			Escribir 'ASIGNACION COMPLETA DE ', nombre, ' ', apellido;
			Escribir '+-------------------------------+';
			Escribir 'El catedratico ', nombre, ' ', apellido, ' se asigno al curso de ', curso;
			Escribir 'Desea asignar otro curso a maestro? (s/n)  ';
			Leer x;
			Escribir 'GENERACION DE ACTA ASIGNACION MAESTRO A CURSOS ';
		Hasta Que (x='n' O x='N')
	SiNo
		Escribir 'DATOS INCORRECTOS';
	FinSi
FinAlgoritmo
