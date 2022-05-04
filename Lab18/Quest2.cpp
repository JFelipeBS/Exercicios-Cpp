#include<iostream>

using namespace std;

int main() {

	// com o for
	int soma = 0;
	for (int i = 1; i <= 100; i+=2)
	{
		soma = soma + i;
	}
	cout << soma;

	cout << endl;
	//com While
	int i = 1;
	int soma2 = 0;
	while (i <= 100)
	{
		soma2 = soma2 + i;
		i += 2;
	}
	cout << soma2;

	cout << endl;
	//do while
	int soma3 = 0;
	int y = 1;
	do
	{
		soma3 = soma3 + y;


	} while ((y=y+2)<=100);
	cout << soma3;

	cout << endl;
	system("pause");
	return 0;
}