// Trabajo_2.cpp: 
//

#include "stdafx.h"
#include "menu.h"
#include "operaciones_matematicas.h"
#include "operaciones_string.h"
#include "command_executer.h"



int main()
{

	uint8_t command = PrintM();
	Execute(command);


	//bool comp = Comparacion(mensaje, mensaje2);
	//std::cout << Comparacion("aa", "aa") ? 1 : 0;
	//std::cout << std::endl;
	//unsigned char var = 1023;
	//unsigned int contador, inicio = 4096; // 2^(8-1) = 128

	//for (contador = inicio; contador > 0; contador >>= 1) // El contador se desplaza un bit a la derecha cada ciclo
	//	if (contador & var) // Si contador AND var == 1
	//		printf("1");
	//	else
	//		printf("0");

	//int var1 = 1;
	//int var2 = 2;

	//printf("var1 = 0x%02x ; var2 = 0x%02x; and = 0x%02x", var1, var2, var1 & var2);
	_getch();
    return 0;
}

