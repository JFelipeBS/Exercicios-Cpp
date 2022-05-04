#include<iostream>


using namespace std;

int main() {

	int idade[100]{};
	int i = 0, n = 0;

	cout << "Digite as idades(0 fara parar):\n";
	do
	{
		cin >> n;
		idade[i] = n;
		++i;

	} while (n != 0);
	
	
	int tam = sizeof(idade) / sizeof(idade[0]);
	int soma = 0;

	for (int i = 0; i <= tam; i++)
	{
		if (idade[i]>=18)
		{
			soma = soma + 1;
		}
	}
	cout << "Nesse grupo " << soma << " pessoas sao maiores de idade" << endl;

	int maior = 0, menor = 200, testm = 0;
	
		for (int i = 0; i < tam; i++)
		{
			if (idade[i]>maior)
			{
				maior = idade[i];
			}

			if (idade[i]<menor)
			{
				testm = idade[i];

				if (testm != 0)
				{
					menor = idade[i];
				}
			}
		}

		cout << "o mais velho tem:" << maior << endl;
		cout << "o mais novo tem: " << menor << endl;



	cout << endl;
	system("pause");
	return 0;
}