#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
#include<Windows.h>


using namespace std;

int main() {
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	char data1[30]{};
	char data2[30]{};
	char data3[30]{};
	char natal[] = "Natal";


	cout << "Quais suas datas comemorativas preferidas?\n";
	cin.getline(data1, 30);
	cin.getline(data2, 30);
	cin.getline(data3, 30);
	
	char juntar[80]{};

	strcpy(juntar, (strcat(data1, ", ")));
	strcpy(juntar, (strcat(juntar, data2)));
	strcpy(juntar, (strcat(juntar, " e ")));
	strcpy(juntar, (strcat(juntar, data3)));
	cout << strcpy(juntar, (strcat(juntar, " são belas festas.")));
	cout << endl;

	if (strcmp(natal, data1) == 0)
	{
		cout << "O Natal tambem é uma das minhas datas preferidas" << endl;
	}
	if (strcmp(natal, data2) == 0)
	{
		cout << "O Natal tambem é uma das minhas datas preferidas" << endl;
	}
	if (strcmp(natal, data3) == 0)
	{
		cout << "O Natal tambem é uma das minhas datas preferidas" << endl;
	}

	

	

	system("pause");
	return 0;
}
