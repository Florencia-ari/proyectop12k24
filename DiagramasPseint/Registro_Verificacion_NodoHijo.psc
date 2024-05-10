Algoritmo Registro_Verificacion
	Escribir "Creado por: Pablo Palencia 9959-23-736";
	//Ingreso del maestro
	Escribir "Ingresar Login de Catedrático...";
	Maestro <- 'Maestros.dat';
	//Recibimos datos/informacion del Maestro
	Escribir '+----------------------------------+';
	Escribir '+      Registro y Verificación     +';
	Escribir '+----------------------------------+';
	Escribir "Leer archivos de maestros registrados";
	Escribir 'DESPLIEGA ARCHIVO sedes.dat';
	Escribir 'Recibe y lee Sede seleccionada';
	Leer sede;
	Si sede<>" " Entonces
		Escribir "Dato Verificado";
	SiNo
		Escribir "Dato no encontrado";
	Fin Si
	Escribir 'DESPLIEGA ARCHIVO Aula.dat';
	Escribir 'Recibe y lee Aula seleccionada';
	Leer aula;
	Si aula<>" " Entonces
		Escribir "Dato Verificado";
	SiNo
		Escribir "Dato no encontrado";
	Fin Si
	Escribir 'DESPLIEGA ARCHIVO Secciones.dat';
	Escribir 'Recibe y lee Seccion seleccionada';
	Leer seccion;
	Si seccion<>" " Entonces
		Escribir "Dato Verificado";
	SiNo
		Escribir "Dato no encontrado";
	Fin Si
	Escribir 'DESPLIEGA ARCHIVO facultades.dat';
	Escribir 'Recibe y lee facultad seleccionada';
	Leer facultad;
	Si facultad<>" " Entonces
		Escribir "Dato Verificado";
	SiNo
		Escribir "Dato no encontrado";
	Fin Si
	Escribir 'DESPLIEGA ARCHIVO carreras.dat';
	Escribir 'Recibe y lee carrera seleccionada';
	Leer carrera;
	Si carrera<>" " Entonces
		Escribir "Dato Verificado";
	SiNo
		Escribir "Dato no encontrado";
	Fin Si
	Escribir 'DESPLIEGA ARCHIVO cursos.dat';
	Escribir 'Recibe y lee curso seleccionado';
	Leer curso;
	Si curso<>" " Entonces
		Escribir "Dato Verificado";
	SiNo
		Escribir "Dato no encontrado";
	Fin Si
	Escribir 'DESPLIEGA ARCHIVO jornada.dat';
	Escribir 'Recibe y lee jornada seleccionada';
	Leer jornada;
	Si jornada<>" " Entonces
		Escribir "Dato Verificado";
	SiNo
		Escribir "Dato no encontrado";
	Fin Si
	Escribir 'DESPLIEGA ARCHIVO horarios.dat';
	Escribir 'Recibe y lee horario seleccionado';
	Leer horario;
	Si horario<>" " Entonces
		Escribir "Dato Verificado";
	SiNo
		Escribir "Dato no encontrado";
	Fin Si
	Escribir "Verificación Exitosa";
FinAlgoritmo
