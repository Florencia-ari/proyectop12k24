//creado por V�ctor Omar G�mez Carrascosa
Algoritmo Login
	Definir usuario, CONTRASENA Como Cadena;
	usuarioMaestro <- 'admin';
	CONTRASENAMAESTRA <- '1234';
	Escribir 'Bienvenido al sistema de login';
	Escribir 'Ingrese su usuario: ';
	Leer usuario;
	Escribir 'Ingrese su contrase�a: ';
	Leer CONTRASENA;
	Si usuario=usuarioMaestro Y CONTRASENA=CONTRASENAMAESTRA Entonces
		Escribir '�Inicio de sesi�n exitoso ingresa al menu !';
	SiNo
		Escribir 'Usuario o contrase�a incorrectos. Int�ntelo de nuevo.';
	FinSi
FinAlgoritmo
