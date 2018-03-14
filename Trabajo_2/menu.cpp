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
