#include "stdafx.h"
#include "operaciones_logicas.h"

using namespace std;

int Swap(int value1, int value2)
{
	int v1 = value1, v2 = value2, aux;

	cout << "\nValores ingresados antes de Swap." << endl;
	cout << "Valor A = " << v1 << ", Valor B = " << v2 << endl;

	aux = value1;
	value1 = value2;
	value2 = aux;

	cout << "\nValores después de Swap." << endl;
	cout << "Nuevo Valor A = " << value1 << ", Nuevo Valor B = " << value2 << endl;

	return 0;
}