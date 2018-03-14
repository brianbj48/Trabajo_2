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