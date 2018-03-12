#include "stdafx.h"
#include "binar_executer.h"
#include "operaciones_binarias.h"

int BExecuter(int eleccion, int valor1, int valor2) {
	int men = eleccion;
	int v1 = valor1;
	int v2 = valor2;
	switch (men)
	{
	case 1:
		std::cout << std::endl << "AND\n";
		men = valor1 & valor2;
		OperacionesBinarias(men);
		break;
	case 2:
		std::cout << std::endl << "OR\n";
		men = valor1 | valor2;
		OperacionesBinarias(men);
		break;
	case 3:
		std::cout << "----------------------\n";
		men = valor1 << 2;
		OperacionesBinarias(men);
		std::cout << std::endl << "2 bit movidos a la izquierda";
		break;
	case 4:
		std::cout <<  "---------------------\n";
		men = valor1 >> 2;
		OperacionesBinarias(men);
		std::cout << std::endl << "2 bit movidos a la derecha";
		break;
	}
	return 0;
};