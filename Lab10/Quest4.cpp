#include<iostream>
#include<Windows.h>
using namespace std;



int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	int numeros[5]{ };

	for (int i = 0; i <= 106; i++)
	{
		numeros[i] = 60;
	}

	cout << endl;

	for (int i = 0; i <= 106; i++)
	{
		cout << numeros[i] << endl;
	}
	
	//por esse experimento eu coseguimos perceber que não a uma posição especifica para que o sistema interfira, porem apartir do numeros[106] os erros ficam mais costantes.

	system("pause");
	return 0;
}
