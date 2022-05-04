#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<cstringt.h>
using namespace std;

int main() {

	char palavra1[30]{};
	char palavra2[30]{};
	char palavra3[30]{};
	char palavra4[30]{};

	cout << "Digite 4 palavras:\n";
	cin.getline(palavra1, 30);
	cin.getline(palavra2, 30);
	cin.getline(palavra3, 30);
	cin.getline(palavra4, 30);

	int a;
	for ( a = 0; palavra1[a]; a++){}
	int b;
	for ( b = 0; palavra2[b]; b++) {}
	int c;
	for ( c = 0; palavra3[c]; c++) {}
	int d;
	for ( d = 0; palavra4[d]; d++) {}

	int tam = a + b + c + d + 4;
	char* concat = new char[tam];

	strcpy(concat, (strcat(palavra1, " ")));
	strcpy(concat, (strcat(concat, palavra2)));
	strcpy(concat, (strcat(concat, " ")));
	strcpy(concat, (strcat(concat, palavra3)));
	strcpy(concat, (strcat(concat, " ")));
	strcpy(concat, (strcat(concat, palavra4)));


	cout << "Concatenando as palavras obtem-se:\n";
	cout << concat;


	delete[] concat;
	cout << endl;
	system("pause");
	return 0;
}