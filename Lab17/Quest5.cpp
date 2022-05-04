#include<iostream>
#include<cmath>

using namespace std;

int main() {

	cout << "A soma dos quadrados dos 10 primeiros numeros naturais e:";
	long long int somadoquadrado = 0;
	for (int i = 1; i <=100 ; i++)
	{
		somadoquadrado = (somadoquadrado + pow(i, 2));
	}
	cout << somadoquadrado;
	cout << endl;

	cout << "O quadrado da soma dos 10 primeiros numeros naturais e:";
	long long int quadradodasoma = 0;
	for (int i = 1; i <= 100; i++)
	{
		quadradodasoma = (quadradodasoma + i);
	}
	quadradodasoma = pow(quadradodasoma, 2);

	cout << quadradodasoma;
	cout << endl;

	long long int diferenca = (quadradodasoma - somadoquadrado);
	cout << "A digerenca da soma:";
	cout << diferenca;


	cout << endl;
	system("pause");
	return 0;
}