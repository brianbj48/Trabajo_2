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
}