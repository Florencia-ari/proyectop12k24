Algoritmo menuFacultad
    Definir opcion Como Entero;
    Definir rep Como Logico;
		
		rep <- Verdadero;
			
			Mientras rep Hacer
					Escribir("---------------------------------------------------");
					Escribir("|             Registros                           |");
					Escribir("---------------------------------------------------");
					Escribir("| 1. Ingresar una Facultad                       |");
					Escribir("| 2. Despliegue Facultades                       |");
					Escribir("| 3. Modificar Facultades                        |");
					Escribir("| 4. Buscar Facultad                             |");
					Escribir("| 5. Borrar Facultad                             |");
					Escribir("| 6. Salir del menu                              |");
					Escribir("---------------------------------------------------");
					
					Escribir("\n\tIngresa una Opcion: ");
					Leer opcion;
					
					Segun opcion Hacer;
						
						Caso 1:
							agregarFacultad()
							Pausa()
						Caso 2:
							mostrarFacultad()
							Pausa()
						Caso 3:
							modificarFacultad()
							Pausa()
						Caso 4:
							buscarFacultad()
							Pausa()
						Caso 5:
							borrarFacultad()
							LimpiarPantalla()
						Caso 6:
							repetir <- Falso
							Defecto:
								Escribir("\n\tOpcion invalida.")
						FinSegun
				FinMientras
FinAlgoritmo

Algoritmo agregarFacultad
    Definir file Como Archivo
    Definir No, codigo, nombre Como Cadena
	
    LimpiarPantalla()
    Escribir("\n---------------------------------------------------")
    Escribir("-------------- Agregar Facultad ------------------")
    Escribir("---------------------------------------------------")
    Escribir("\tIngresa Numero de facultad: ")
    Leer No
    Escribir("\tIngresa codigo de facultad: ")
    Leer codigo
    Escribir("\tIngresa nombre de facultad (sustituir espacios por '_'): ")
    Leer nombre
	
    AbrirArchivo file, "Facultad.txt", "a"
    Escribir file, No, codigo, nombre
    CerrarArchivo file
FinAlgoritmo

Algoritmo mostrarFacultad
    Definir file Como Archivo
    Definir No, codigo, nombre Como Cadena
    Definir total Como Entero
    total <- 0
	
    LimpiarPantalla()
    Escribir("---------------------------------------------------")
    Escribir("----------------- Facultades Registradas ------------------")
    Escribir("---------------------------------------------------")
	
    AbrirArchivo file, "Facultad.txt", "r"
    Si ExisteArchivo(file) Entonces
        LeerArchivo file, No, codigo, nombre
        Mientras No FinArchivo(file) Hacer
            total <- total + 1
            Escribir("\n\tNo : ", No)
            Escribir("\tCodigo: ", codigo)
            Escribir("\tFacultad de: ", nombre)
            LeerArchivo file, No, codigo, nombre
        FinMientras
        Si total = 0 Entonces
            Escribir("\n\tError..")
        FinSi
    Sino
        Escribir("\n\tNo hay informacion...")
    FinSi
    CerrarArchivo file
FinAlgoritmo

Algoritmo modificarFacultad
    Definir file, file1 Como Archivo
    Definir Registros_id Como Cadena
    Definir found Como Entero
    found <- 0
	
    LimpiarPantalla()
    Escribir("\n---------------------------------------------------")
    Escribir("----------------- Modificar Facultad ------------------")
    Escribir("---------------------------------------------------")
	
    AbrirArchivo file, "Facultad.txt", "r"
    Si ExisteArchivo(file) Entonces
        Escribir("\n Ingrese Numero de Facultad que quiere modificar: ")
        Leer Registros_id
        AbrirArchivo file1, "Facultad2.txt", "a"
        LeerArchivo file, No, codigo, nombre
        Mientras No FinArchivo(file) Hacer
            Si Registros_id <> No Entonces
                Escribir file1, No, codigo, nombre
            Sino
                Escribir("\tIngrese No : ")
                Leer No
                Escribir("\tIngrese codigo : ")
                Leer codigo
                Escribir("\tIngrese nombre (sustituir espacios por '_') : ")
                Leer nombre
                Escribir file1, No, codigo, nombre
                found <- found + 1
            FinSi
            LeerArchivo file, No, codigo, nombre
        FinMientras
        CerrarArchivo file
        CerrarArchivo file1
        EliminarArchivo "Facultad.txt"
        RenombrarArchivo "Facultad2.txt", "Facultad.txt"
    Sino
        Escribir("\n\tError..")
    FinSi
FinAlgoritmo

Algoritmo buscarFacultad
    Definir file Como Archivo
    Definir Registros_id Como Cadena
    Definir found Como Entero
    found <- 0
	
    LimpiarPantalla()
    Escribir("\n---------------------------------------------------")
    Escribir("----------------- Buscar Facultad ------------------")
    Escribir("---------------------------------------------------")
	
    AbrirArchivo file, "Facultad.txt", "r"
    Si ExisteArchivo(file) Entonces
        Escribir("\nIngrese Numero de Facultad que desea buscar: ")
        Leer Registros_id
        LeerArchivo file, No, codigo, nombre
        Mientras No FinArchivo(file) Hacer
            Si Registros_id = No Entonces
                Escribir("\n\tNo: ", No)
                Escribir("\n\tCodigo: ", codigo)
                Escribir("\n\tFacultad de : ", nombre)
                found <- found + 1
            FinSi
            LeerArchivo file, No, codigo, nombre
        FinMientras
        Si found = 0 Entonces
            Escribir("\n\tRegistros no encontrado...")
        FinSi
    Sino
        Escribir("\n\tERROR...")
    FinSi
    CerrarArchivo file
FinAlgoritmo

Algoritmo borrarFacultad
    Definir file, file1 Como Archivo
    Definir Registros_id Como Cadena
    Definir found Como Entero
    found <- 0
	
    LimpiarPantalla()
    Escribir("\n---------------------------------------------------")
    Escribir("----------------- Borrar Facultad ------------------")
    Escribir("---------------------------------------------------")
	
    AbrirArchivo file, "Facultad.txt", "r"
    Si ExisteArchivo(file) Entonces
        Escribir("\nIngrese el Numero de la Facultad: ")
        Leer Registros_id
        AbrirArchivo file1, "Facultad2.txt", "a"
        LeerArchivo file, No, codigo, nombre
        Mientras No FinArchivo(file) Hacer
            Si Registros_id <> No Entonces
                Escribir file1, No, codigo, nombre
            Sino
                found <- found + 1
                Escribir("\n\tAccion Realizada Correctamente")
            FinSi
            LeerArchivo file, No, codigo, nombre
        FinMientras
        Si found = 0 Entonces
            Escribir("\n\tNumero de Facultad no encontrado...")
        FinSi
        CerrarArchivo file
        CerrarArchivo file1
        EliminarArchivo "Facultad.txt"
        RenombrarArchivo "Facultad2.txt", "Facultad.txt"
    Sino
        Escribir("\n\tERROR...")
    FinSi
FinAlgoritmo
