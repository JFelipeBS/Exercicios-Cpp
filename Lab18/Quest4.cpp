#include<iostream>

using namespace std;

int main() {

	cout << "Digite uma palavra: ";
	char palavra[60]{};
	cin.getline(palavra, 60);

	char test[60]{};
	
	int i, j = 0;
		for (i = strlen(palavra) - 1,j; i >= 0; i--,j++)
		{
			test[j] = palavra[i];
		}
		
		if (strcmp(test, palavra) == 0)
		{
			cout << "E palindromo";
		}
		else
		{
			cout << "Nao e palindromo";

		}


		cout << endl;
		system("pause");
		return 0;
}