<<<<<<< HEAD
#include "stdafx.h"
#include "operaciones_string.h"
#include <string.h>
using namespace std;

bool Compare(const char* char1,const char* char2) {
	std::locale::global(std::locale("spanish"));

	if (strcmp(char1, char2) == 0) return true;
	else return false;
}

bool CompareAlf(const char* char1, const char* char2) {
	std::locale::global(std::locale("spanish"));
	if (strcmp(char1, char2) > 0) return false;
	else return true;
=======
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
>>>>>>> ebde7a4ca324ec83a2d70903f5e6038c36136ecb
}