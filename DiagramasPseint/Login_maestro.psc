Algoritmo Login
    Definir usuario, contrase�a como cadena;
    usuarioMaestro <- "admin";
    contrase�aMaestra <- "1234";
	
    Escribir "Bienvenido al sistema de login";
	
    Escribir "Ingrese su usuario: ";
    Leer usuario;
	
    Escribir "Ingrese su contrase�a: ";
    Leer contrase�a;
	
    Si usuario = usuarioMaestro Y contrase�a = contrase�aMaestra Entonces;
        Escribir "�Inicio de sesi�n exitoso ingresa al menu !";
    Sino
        Escribir "Usuario o contrase�a incorrectos. Int�ntelo de nuevo.";
    FinSi
FinAlgoritmo
