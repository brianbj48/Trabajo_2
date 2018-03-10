#include "stdafx.h"
#include "operaciones_matematicas.h"
#include "operaciones_string.h"
#include "command_executer.h"

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
	std::cout << std::endl << "Por favor ingrese el primer valor a elevar" << std::endl;
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
	std::cout << std::endl << "El resultado de la suma es: " << Suma(valor1, valor2) << std::endl;

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
	std::cout << std::endl << "El mayor de los números es: " << Maximo(valor1, valor2) << std::endl;

}
void MenuConcVar() {

}
void MenuTextScr() {

}
void MenuCompare() {
	std::locale::global(std::locale("spanish"));
	char cadena1[50];
	char cadena2[50];
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

}
void MenuOpLog() {

}