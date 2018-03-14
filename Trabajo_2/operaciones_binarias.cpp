<<<<<<< HEAD
#include "stdafx.h"
#include "operaciones_binarias.h"

void PrintBinInt(int num) {
	uint32_t var = num;
	uint32_t counter, start = 524288; // 2^(19-1) = 524288

	for (counter = start; counter > 0; counter >>= 1) // Counter displaces a bit by cycle
		if (counter & var) // if counter AND var == 1
			printf("1");
		else
			printf("0");
}

int BinaryOperations(int num) {
	int a = num;
	PrintBinInt(a);
	return 0;
}
=======
#include "stdafx.h"
#include "operaciones_binarias.h"

void PrintBinInt(int num) {
	uint32_t var = num;
	uint32_t contador, inicio = 524288; // 2^(19-1) = 524288

	for (contador = inicio; contador > 0; contador >>= 1) // El contador se desplaza un bit a la derecha cada ciclo
		if (contador & var) // Si contador AND var == 1
			printf("1");
		else
			printf("0");
}

int OperacionesBinarias(int num) {
	int a = num;
	PrintBinInt(a);
	return 0;
}
>>>>>>> ebde7a4ca324ec83a2d70903f5e6038c36136ecb
