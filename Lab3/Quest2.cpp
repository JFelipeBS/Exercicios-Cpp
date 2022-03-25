#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	int Num;

	cout << "Qual a tabuada? ";
	cin >> Num;

	system("cls");

	cout << "====================================================" << endl;
	cout << "\t\t\  Tabuada de "<< Num << endl;
	cout << "====================================================" << endl;
	
	for (int i = 0; i <= 9; i++) {
		cout << Num << " x " << i << " = " << Num * i << endl;

	}



	return 0;
}