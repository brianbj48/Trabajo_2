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
}