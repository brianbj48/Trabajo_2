<<<<<<< HEAD
#include "stdafx.h"
#include "operaciones_preprocesador.h"

int Concatenate() {
	std::locale::global(std::locale("spanish"));
	int casa = 0;
	std::cout << VNAME(casa) << " es el nombre de la variable" << std::endl;
	std::cout << UNIR(VNAME(casa), VNAME(casa)) << " es el nuevo nombre" << std::endl;
	return 0;
}

int Print() {
	PRINT;
	return 0;
=======
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
>>>>>>> ebde7a4ca324ec83a2d70903f5e6038c36136ecb
}