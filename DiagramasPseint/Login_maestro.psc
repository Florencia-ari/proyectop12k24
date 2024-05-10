//creado por Víctor Omar Gómez Carrascosa
Algoritmo Login
	Definir usuario, CONTRASENA Como Cadena;
	usuarioMaestro <- 'admin';
	CONTRASENAMAESTRA <- '1234';
	Escribir 'Bienvenido al sistema de login';
	Escribir 'Ingrese su usuario: ';
	Leer usuario;
	Escribir 'Ingrese su contraseña: ';
	Leer CONTRASENA;
	Si usuario=usuarioMaestro Y CONTRASENA=CONTRASENAMAESTRA Entonces
		Escribir '¡Inicio de sesión exitoso ingresa al menu !';
	SiNo
		Escribir 'Usuario o contraseña incorrectos. Inténtelo de nuevo.';
	FinSi
FinAlgoritmo
