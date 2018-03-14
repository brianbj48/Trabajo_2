#include "stdafx.h"
#include "operaciones_matematicas.h"

int Add(int operator1, int operator2){
	return operator1 + operator2;
}

int Square(int operator1) {
	return operator1 * operator1;
}

float Area(float diameter) {
	float radio = diameter * .5f;
	float area;
	area = PI * (radio * radio);
	return area;
}

int Max(int value1, int value2) {
	if (value1 == value2) return value1;
	else if (value1 > value2) return value1;
	else return value2;
}