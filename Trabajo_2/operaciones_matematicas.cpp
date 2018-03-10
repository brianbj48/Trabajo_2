#include "stdafx.h"
#include "operaciones_matematicas.h"

int Suma(int operando1, int operando2){
	return operando1 + operando2;
}

int Cuadrado(int operando1) {
	return operando1 * operando1;
}

float Area(float diametro) {
	float radio = diametro * .5f;
	float area;
	area = PI * (radio * radio);
	return area;
}

int Maximo(int valor1, int valor2) {
	if (valor1 == valor2) return valor1;
	else if (valor1 > valor2) return valor1;
	else return valor2;
}