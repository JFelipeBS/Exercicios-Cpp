#include<iostream>

using namespace std;

const int mes = 12;
const int anos = 3;


int main() {
	const char* meses[mes]{ "janeiro","fevereiro","março","abril","maio","junho","julho","agosto", "setembro","outubro","novembro","desembro" };
	int matriz[anos][mes];
	int soma[3]{ 0 };


	for (int i = 0; i < anos; i++)
	{
		cout << "Digite o numero de livros vendidos no " << i+1 << "o ano:\n";
		for (int j = 0; j < mes; j++)
		{
			cout << meses[j] << ": ";
			cin >> matriz[i][j];
			soma[i] = soma[i] + matriz[i][j];

		}
		cout << endl;
	}

	int total = 0;
	cout << "Total de vendas" << endl;
	for (int i = 0; i < anos; i++)
	{
		total = total + soma[i];
		cout<< 1+i <<"o "<< soma[i] << endl;
	}

	cout << endl;
	cout << "Nos tres anos foram vendidos " << total << " livros.";
	cout<<endl;

	system("pause");
	return 0;
}