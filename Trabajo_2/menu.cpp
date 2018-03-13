<<<<<<< HEAD

#include "stdafx.h"
#include "menu.h"
#include "command_executer.h"
#include "main.h"
#include <cctype>

int PrintM() {
	std::locale::global(std::locale("spanish"));
	system("cls");
	int election;
	printf("\n¡Bienvenidos! Elija una de las opciones y pulse enter\n [1] El cuadrado de un número\n [2] Sumar dos números\n [3] Area de un círculo\n [4] El máximo de dos números\n [5] Concatenado de dos nombres de variables\n [6] Imprimir un texto por pantalla\n [7] Comparación de cadena\n [8] Operaciones binarias\n [9] Operaciones lógicas\n[99] Salir\n");

	scanf_s("%d", &election);
	system("cls");
	if ((election >0 && election < 10) || election == 99) {
		if (std::isdigit(election)) {
			Restart();
		} else return election;
	}
	else Restart();
}

void Restart() {
	std::cout << "Solo puede ingresar valores enteros entre 0 y 10, pulse una tecla para volver a empezar" << std::endl;
	_getch();
	main();
}
=======

#include "stdafx.h"
#include "menu.h"
#include "command_executer.h"

//using namespace std;

int PrintM() {
	std::locale::global(std::locale("spanish"));
	system("cls");
	int eleccion;
	printf("\n¡Bienvenidos! Elija una de las opciones y pulse enter\n [1] El cuadrado de un número\n [2] Sumar dos números\n [3] Area de un círculo\n [4] El máximo de dos números\n [5] Concatenado de dos nombres de variables\n [6] Imprimir un texto por pantalla\n [7] Comparación de cadena\n [8] Operaciones binarias\n [9] Operaciones lógicas\n[99] Salir\n");

	scanf_s("%d", &eleccion);
	system("cls");
	if (eleccion >0 && eleccion < 10 || eleccion == 99) {
		//std::cout << "correcto" << std::endl;
		return eleccion;
	}
	else Restart();
}

void Restart() {
	std::cout << "Solo puede ingresar valores enteros, pulse una tecla para volver a empezar" << std::endl;
	_getch();
	PrintM();
}





//
//
//int main(void)
//{
//	int num;
//	int ch;
//	int ok;
//
//	do {
//		printf("Ingresa un entero: ");
//		fflush(stdout);
//		if ((ok = scanf("%d", &num)) == EOF)
//			return EXIT_FAILURE;
//
//		if ((ch = getchar()) != '\n') {
//			ok = 0;
//
//			while ((ch = getchar()) != EOF && ch != '\n')
//				;
//		}
//	} while (!ok);
//
//	printf("num == %d\n", num);
//	getchar();
//
//	return EXIT_SUCCESS;
//}

>>>>>>> ebde7a4ca324ec83a2d70903f5e6038c36136ecb
