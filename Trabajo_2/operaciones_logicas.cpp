<<<<<<< HEAD
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
<<<<<<< HEAD
=======
=======
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
>>>>>>> ebde7a4ca324ec83a2d70903f5e6038c36136ecb
>>>>>>> 8a0a14ffe63ae4cd305e18c3a33a9ced23250c73
