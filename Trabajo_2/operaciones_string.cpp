#include "stdafx.h"
#include "operaciones_string.h"
#include <string.h>
using namespace std;

bool Comparacion(const char* cadena1,const char* cadena2) {
	std::locale::global(std::locale("spanish"));

	if (strcmp(cadena1, cadena2) == 0) return true;
	else return false;
}

bool ComparacionAlf(const char* cadena1, const char* cadena2) {
	std::locale::global(std::locale("spanish"));
	if (strcmp(cadena1, cadena2) > 0) return false;
	else return true;
}