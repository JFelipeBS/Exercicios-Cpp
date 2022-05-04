#include<iostream>
using namespace std;

struct ASCII
{
	int letraascii;
	char letra;
};

ASCII* funcao(int x, char y);

int main(){


	cout << "Digite um numero inteiro: ";
	int x;
	cin >> x;
	cout << "Digite um caracter: ";
	char y;
	cin >> y;
	
	cout << endl;
	ASCII* final = funcao(x, y);
	
	cout << "O resultado de char e: " << final->letra << endl;
	cout << "O resultado de inteiro e : " << final->letraascii << endl;

	delete final;
	system("pause");
	return 0;
}

ASCII* funcao(int x, char y) {

	ASCII* test = new ASCII{ x,y };
	return test;
}