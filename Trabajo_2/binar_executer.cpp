#include "stdafx.h"
#include "binar_executer.h"
#include "operaciones_binarias.h"

int BExecuter(int election, int value1, int value2) {
	int men = election;
	int v1 = value1;
	int v2 = value2;
	switch (men)
	{
	case 1:
		std::cout << std::endl << "AND\n";
		men = value1 & value2;
		BinaryOperations(men);
		break;
	case 2:
		std::cout << std::endl << "OR\n";
		men = value1 | value2;
		BinaryOperations(men);
		break;
	case 3:
		std::cout << "----------------------\n";
		men = value1 << 2;
		BinaryOperations(men);
		std::cout << std::endl << "2 bit movidos a la izquierda";
		break;
	case 4:
		std::cout <<  "---------------------\n";
		men = value1 >> 2;
		BinaryOperations(men);
		std::cout << std::endl << "2 bit movidos a la derecha";
		break;
	}
	return 0;
};