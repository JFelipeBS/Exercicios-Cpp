#include<iostream>


using namespace std;

int main()
{
	float vet[5]{ 6.1,81.6,0.09,98.9,255.01 };

	cout << "Os numeros sao:" << endl;

	for (int i = 0; i <= 4; i++)
	{

		cout << vet[i] << endl;
	}

	cout << endl;
	cout << "Seus valors reais sao:" << endl;

	for (int i = 0; i <= 4; i++)
	{

		cout.fixed; cout.precision(8); cout << vet[i] << endl;
	}
	cout << endl;

	system("pause");
	return 0;
}