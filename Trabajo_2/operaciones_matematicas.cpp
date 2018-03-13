<<<<<<< HEAD
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
=======
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
>>>>>>> ebde7a4ca324ec83a2d70903f5e6038c36136ecb
}