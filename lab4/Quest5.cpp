#include <iostream>
#include<Windows.h>
#include<cmath>


using namespace std;

int Absoluto(int x);

int main()
{

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	int x;

	// Cabeçalho do programa
	cout.width(70); cout << "----------------\n";
	cout.width(70); cout << "|VALOR ABSOLUTO|\n";
	cout.width(70); cout << "----------------\n" << endl;
	//______________________________________________________________________________

	
	cout.width(70); cout << "Digite o  valor: ";
	cin >> x;
	cout.width(73); cout << "O valor absoluto é: " << Absoluto(x) << endl;
	

	system("pause");
	return 0;
}

int Absoluto(int x) 
{
	
	int y, z;
	y = pow(x, 2);
	z = sqrt(y);

	return z;
	
}