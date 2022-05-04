#include<iostream>
#include<cstring>

using namespace std;

struct Login
{
	char nome[30]{};
	char senha[20]{};
};

int main() {

	Login adimin{ "Felipe","Pokemon123" };
	Login comp{};
	char comnome[28];
	char comsenha[2];

	cout << "Digite seu usuario: ";
	cin >> comp.nome;
	cout << "Digite sua senha: ";
	cin >> comp.senha;
	int comparacaosenha = 0;
	int comparacaonome = 0;


	int i, j;
	for (i = 0; i < strlen(adimin.nome); i++)
	{
		if ((adimin.nome[i]==comp.nome[i]))
		{
			comparacaonome = comparacaonome + 1;
		}
		else
		{
			comparacaonome = 0;
		}

	}
	for (j = 0; j < strlen(adimin.senha); j++)
	{
		if (adimin.senha[j] == comp.senha[j])
		{
			comparacaosenha = comparacaosenha + 1;
		}
		else
		{
			comparacaosenha = 0;
		}
	}

	if (comparacaonome == strlen(adimin.nome)&&(comparacaosenha == strlen(adimin.senha)))
	{
		cout << "Login e senha corretos";
	}
	else
	{
		cout << "login ou senha errado";
	}

	cout << endl;
	system("pause");
	return 0;
}