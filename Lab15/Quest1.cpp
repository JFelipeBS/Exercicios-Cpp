#include<iostream>

using namespace std;

int main() {

	float peso;
	peso = 30;
	cout << peso;
	delete peso;  //esse programa n�o � valido porque o delete so pose ser usado com aloca��o dinamica de memoria.


	system("pause");
	return 0;
}