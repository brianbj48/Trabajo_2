<<<<<<< HEAD
#include "stdafx.h"
#include "operaciones_matematicas.h"
#include "operaciones_preprocesador.h"
#include "operaciones_string.h"
#include "operaciones_binarias.h"
#include "operaciones_logicas.h"
#include "command_executer.h"
#include "binar_executer.h"

int Execute(int menuN) {
	int men = menuN;
	switch (men) 
	{
		case 1:
			MenuSquare();
			break;
		case 2:
			MenuAdd();
			break;
		case 3:
			MenuArea();
			break;
		case 4:
			MenuMax();
			break;
		case 5:
			MenuConcVar();
			break;
		case 6:
			MenuTextScr();
			break;
		case 7:
			MenuCompare();
			break;
		case 8:
			MenuOpBin();
			break;
		case 9:
			MenuOpLog();
			break;
		case 99:
			Exit();
			break;
	}
	return 0;
}

void MenuSquare() {
	std::locale::global(std::locale("spanish"));
	int value1;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el valor a elevar" << std::endl;
	scanf_s("%d", &value1);
	system("cls");
	std::cout << std::endl << value1 << " elevado al cuadrado es: " << Square(value1) << std::endl;
}
void MenuAdd() {
	std::locale::global(std::locale("spanish"));
	int value1;
	int value2;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el primer valor a sumar" << std::endl;
	scanf_s("%d", &value1);
	std::cout << std::endl << "Por favor ingrese el segundo valor" << std::endl;
	scanf_s("%d", &value2);
	system("cls");
	printf("\n%d + %d es: %d\n", value1, value2, Add(value1, value2));
}
void MenuArea() {
	std::locale::global(std::locale("spanish"));
	int value1;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el diámetro del círculo" << std::endl;
	scanf_s("%d", &value1);
	system("cls");
	std::cout << std::endl << " El area del círculo es: " << Area(value1) << std::endl;
}
void MenuMax() {
	std::locale::global(std::locale("spanish"));
	int value1;
	int value2;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el primer valor a comparar" << std::endl;
	scanf_s("%d", &value1);
	system("cls");
	std::cout << std::endl << "Por favor ingrese el segundo valor" << std::endl;
	scanf_s("%d", &value2);
	system("cls");
	printf("\nEl mayor entre %d y %d es: %d\n", value1, value2, Max(value1, value2));
}
void MenuConcVar() {
	Concatenate();
}
void MenuTextScr() {
	Print();
}
void MenuCompare() {
	std::locale::global(std::locale("spanish"));
	char str1[100];
	char str2[100];
	system("cls");
	std::cout << std::endl << "Por favor ingrese la primer cadena a comparar" << std::endl;
	std::cin>> str1;
	std::cout << std::endl << "Por favor ingrese la segunda cadena" << std::endl;
	std::cin >> str2;
	bool comp = Compare(str1, str2);
	if (comp)
		std::cout << std::endl << "Los strings son iguales"<< std::endl;
	else 
		std::cout << std::endl << "Los strings son distintos" << std::endl;
}
void MenuOpBin() {
	std::locale::global(std::locale("spanish"));
	int election;
	unsigned int value1;
	unsigned int value2;
	system("cls");
	std::cout << std::endl << "Elija una acción\n [1] AND\n [2] OR\n [3] Desplazar 2 bit a la izquierda\n [4] Desplazar 2 bit a la derecha " << std::endl; //ver qué pasa con los \n
	scanf_s("%d", &election);
	system("cls");
	std::cout << std::endl << "Por favor ingrese un valor entero" << std::endl;
	scanf_s("%d", &value1);
	if (election == 1 || election == 2) {
		std::cout << std::endl << "Ingrese el segundo valor entero" << std::endl;
		scanf_s("%d", &value2);
	} else value2 = 0;
	system("cls");

	std::cout << std::endl << "El resultado de la operación es:\n";
	BinaryOperations(value1);
	printf("\n");
	if (election == 1 || election == 2) BinaryOperations(value2);
	BExecuter(election, value1, value2);
}
void MenuOpLog() {
	std::locale::global(std::locale("spanish"));
	int value1;
	int value2;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el primer valor para Swap" << std::endl;
	scanf_s("%d", &value1);
	std::cout << std::endl << "Por favor ingrese el segundo valor" << std::endl;
	scanf_s("%d", &value2);
	system("cls");
	Swap(value1, value2);
}
void Exit() {
	exit(0);
=======
#include "stdafx.h"
#include "operaciones_matematicas.h"
#include "operaciones_preprocesador.h"
#include "operaciones_string.h"
#include "operaciones_binarias.h"
#include "operaciones_logicas.h"
#include "command_executer.h"
#include "binar_executer.h"

int Execute(int menuN) {
	int men = menuN;
	switch (men) 
	{
		case 1:
			MenuCuadrado();
			break;
		case 2:
			MenuSuma();
			break;
		case 3:
			MenuArea();
			break;
		case 4:
			MenuMax();
			break;
		case 5:
			MenuConcVar();
			break;
		case 6:
			MenuTextScr();
			break;
		case 7:
			MenuCompare();
			break;
		case 8:
			MenuOpBin();
			break;
		case 9:
			MenuOpLog();
			break;
	}
	return 0;
}

void MenuCuadrado() {
	std::locale::global(std::locale("spanish"));
	int valor1;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el valor a elevar" << std::endl;
	scanf_s("%d", &valor1);
	system("cls");
	std::cout << std::endl << valor1 << " elevado al cuadrado es: " << Cuadrado(valor1) << std::endl;
}
void MenuSuma() {
	std::locale::global(std::locale("spanish"));
	int valor1;
	int valor2;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el primer valor a sumar" << std::endl;
	scanf_s("%d", &valor1);
	system("cls");
	std::cout << std::endl << "Por favor ingrese el segundo valor" << std::endl;
	scanf_s("%d", &valor2);
	system("cls");
	printf("\n%d + %d es: %d\n", valor1, valor2, Suma(valor1, valor2));
}
void MenuArea() {
	std::locale::global(std::locale("spanish"));
	int valor1;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el diámetro del círculo" << std::endl;
	scanf_s("%d", &valor1);
	system("cls");
	std::cout << std::endl << " El area del círculo es: " << Area(valor1) << std::endl;
}
void MenuMax() {
	std::locale::global(std::locale("spanish"));
	int valor1;
	int valor2;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el primer valor a comparar" << std::endl;
	scanf_s("%d", &valor1);
	system("cls");
	std::cout << std::endl << "Por favor ingrese el segundo valor" << std::endl;
	scanf_s("%d", &valor2);
	system("cls");
	printf("\nEl mayor entre %d y %d es: %d\n", valor1, valor2, Maximo(valor1, valor2));
}
void MenuConcVar() {
	Preprocesador();
}
void MenuTextScr() {
	std::locale::global(std::locale("spanish"));
	std::string cadena1;
	system("cls");
	std::cout << std::endl << "Por favor ingrese un texto a imprimir y finalice con un punto" << std::endl;
	std::getline(std::cin, cadena1, '.');
	system("cls");
	std::cout << std::endl << "El texto ingresado es: "<< std::endl << cadena1 << std::endl;
}
void MenuCompare() {
	std::locale::global(std::locale("spanish"));
	char cadena1[100];
	char cadena2[100];
	system("cls");
	std::cout << std::endl << "Por favor ingrese la primer cadena a comparar" << std::endl;
	std::cin>> cadena1;
	std::cout << std::endl << "Por favor ingrese la segunda cadena" << std::endl;
	std::cin >> cadena2;
	bool comp = Comparacion(cadena1, cadena2);
	if (comp)
		std::cout << std::endl << "Los strings son iguales"<< std::endl;
	else 
		std::cout << std::endl << "Los strings son distintos" << std::endl;
}
void MenuOpBin() {
	std::locale::global(std::locale("spanish"));
	int eleccion;
	int valor1;
	int valor2;
	system("cls");
	std::cout << std::endl << "Elija una acción\n [1] AND\n [2] OR\n [3] Desplazar 2 bit a la izquierda\n [4] Desplazar 2 bit a la derecha " << std::endl; //ver qué pasa con los \n
	scanf_s("%d", &eleccion);
	system("cls");
	std::cout << std::endl << "Por favor ingrese un valor entero" << std::endl;
	scanf_s("%d", &valor1);
	if (eleccion == 1 || eleccion == 2) {
		std::cout << std::endl << "Ingrese el segundo valor entero" << std::endl;
		scanf_s("%d", &valor2);
	} else valor2 = 0;
	system("cls");

	std::cout << std::endl << "El resultado de la operación es:\n";
	OperacionesBinarias(valor1);
	printf("\n");
	if (eleccion == 1 || eleccion == 2) OperacionesBinarias(valor2);
	BExecuter(eleccion, valor1, valor2);
}
void MenuOpLog() {
	std::locale::global(std::locale("spanish"));
	int valor1;
	int valor2;
	system("cls");
	std::cout << std::endl << "Por favor ingrese el primer valor para Swap" << std::endl;
	scanf_s("%d", &valor1);
	std::cout << std::endl << "Por favor ingrese el segundo valor" << std::endl;
	scanf_s("%d", &valor2);
	system("cls");
	Swap(valor1, valor2);
>>>>>>> ebde7a4ca324ec83a2d70903f5e6038c36136ecb
}