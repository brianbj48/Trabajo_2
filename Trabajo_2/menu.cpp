
#include "stdafx.h"
#include "menu.h"
#include "command_executer.h"

int PrintM() {
	std::locale::global(std::locale("spanish"));
	system("cls");
	int eleccion;
	std::cout << std::endl << "¡Bienvenidos! Elija una de las opciones  y pulse enter" << std::endl << std::endl;
	std::cout << " [1] El cuadrado de un número " << std::endl;
	std::cout << " [2] Sumar dos números " << std::endl;
	std::cout << " [3] Area de un círculo " << std::endl;
	std::cout << " [4] El máximo de dos números " << std::endl;
	std::cout << " [5] Concatenado de dos nombres de variables " << std::endl;
	std::cout << " [6] Imprimir un texto por pantalla " << std::endl;
	std::cout << " [7] Comparación de cadena " << std::endl;
	std::cout << " [8] Operaciones binarias " << std::endl;
	std::cout << " [9] Operaciones lógicas " << std::endl;
	std::cout << "[99] Salir" << std::endl << std::endl;

	scanf_s("%d", &eleccion);
	system("cls");
	if (eleccion >0 && eleccion < 10 || eleccion == 99) {
		std::cout << "correcto" << std::endl;
		
	}
	else Restart();
	return eleccion;
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

