#include<iostream>
#include<Windows.h>
#include<cmath>

using namespace std;

int main() {
	
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	double numero_T = 0;
	int numero = 3358670848;
	
	int vet_I[23]{ 23,22,21,20,19,18,17,16,15,14,13,12,11,10,9,8,7,6,5,4,3,2,1 };

	cout << "Qual o valor  11001000001100010100000000000000 em float ?" << endl;
	
	//resuldo expoente.
	int expoente;
	expoente = 3358670848 >> 24;
	
	//calculando mantiça.
	for (int i = 22; i >=0 ; i--)
	{
		int test = 1 << i;
		if (numero & test)

			numero_T = numero_T + (1 / pow(2, vet_I[i]));
	}
	
	//Imprimindo resultados.
	cout << "O expoente é = " << expoente << endl;
	cout << "Resultado de M = " << numero_T << endl;

	//variavel que contem o resultado total do numero em float.
	float rsultado_T = pow(2, expoente - 127) * (1 + numero_T);
	cout << "Resultado em float é = " << rsultado_T;
	cout << endl;

	system("pause");
	return 0;
	
}