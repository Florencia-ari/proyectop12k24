Algoritmo Login
    Definir usuario, contraseña como cadena;
    usuarioMaestro <- "admin";
    contraseñaMaestra <- "1234";
	
    Escribir "Bienvenido al sistema de login";
	
    Escribir "Ingrese su usuario: ";
    Leer usuario;
	
    Escribir "Ingrese su contraseña: ";
    Leer contraseña;
	
    Si usuario = usuarioMaestro Y contraseña = contraseñaMaestra Entonces;
        Escribir "¡Inicio de sesión exitoso ingresa al menu !";
    Sino
        Escribir "Usuario o contraseña incorrectos. Inténtelo de nuevo.";
    FinSi
FinAlgoritmo
