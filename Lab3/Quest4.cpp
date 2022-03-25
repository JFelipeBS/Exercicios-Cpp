#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);


	cout << "====================================================" << endl;
	cout << "\t\t\  CUSTO DE UM CARRO AO CONSUMIDOR " << endl;
	cout << "====================================================" << endl;

	double custoO, total;

	cout << "Custo de fabrica: ";
	cin >> custoO;
	
	// impostos + distribuidor somam 73%

	total = ((custoO * 73) / 100) + custoO;
	cout << "O custo ao consumidor é de R" << total << endl;
	

	

	return 0;
}