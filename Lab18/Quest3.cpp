#include<iostream>

using namespace std;

int main() {

	char texto[50]{};

	cout << "digite um testo com que contenha @:\n";
	cin.getline(texto, 50);

	char textorecebido[50]{};
	int i = 0;
	while (texto[i]!='@')
	{
		textorecebido[i] = texto[i];
		i++;
	}

	int x = 0;
	while (textorecebido[x]!='\0')
	{
		cout << texto[x];
		x++;
	}

	cout << endl;
	system("pause");
	return 0;
}