#include "stdafx.h"
#include "operaciones_logicas.h"

using namespace std;

int Swap(int valor1, int valor2)
{
	int v1 = valor1, v2 = valor2, aux;

	cout << "\nValores ingresados antes de Swap." << endl;
	cout << "Valor A = " << v1 << ", Valor B = " << v2 << endl;

	aux = valor1;
	valor1 = valor2;
	valor2 = aux;

	cout << "\nValores después de Swap." << endl;
	cout << "Nuevo Valor A = " << valor1 << ", Nuevo Valor B = " << valor2 << endl;

	return 0;
}
