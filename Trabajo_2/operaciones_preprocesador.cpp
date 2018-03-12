#include "stdafx.h"
#include "operaciones_preprocesador.h"

int Preprocesador() {
	std::locale::global(std::locale("spanish"));
	int valor1;
	int valor2;
	system("cls");
	//std::cout << std::endl << "Elegiremos dos valores para formar la función ficticia\n [1] "<< \n [2] Sumar dos números\n [3] Area de un círculo\n [4] El máximo de dos números\n [5] Concatenado de dos nombres de variables\n [6] Imprimir un texto por pantalla\n" << std::endl;
	std::cout << std::endl << "Por favor ingrese el primer valor a comparar" << std::endl;
	scanf_s("%d", &valor1);
	system("cls");
	std::cout << std::endl << "Escoja la segunda mitad" << std::endl;
	scanf_s("%d", &valor2);
	return 0;
}