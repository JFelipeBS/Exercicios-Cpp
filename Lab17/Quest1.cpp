#include<iostream>
using namespace std;

int main() {

	int a[5]{};
	int b[5]{};

	cout << "digite 10 valores:\n";
	//Valores de A
	for (int i = 0; i <=4 ; i++)			
	{
		cin >> a[i];
	} 
	//Valores de B
	for (int i = 0; i <=4; i++)				
	{
		cin >> b[i];
	}          

	//mostrando os vetores e a soma dos mesmos.
	cout << "Vetor A: ";
	for (int i = 0; i <=4 ; i++)
	{
		cout << a[i] << " ";
	}
	cout << endl;
	cout << "Vetor B: ";
	for (int i = 0; i <= 4; i++)
	{
		cout << b[i] << " ";
	}
	cout << endl;
	cout << "Vetor S: ";
	for (int i = 0; i <= 4; i++)
	{
		cout << a[i]+b[i] << " ";
	}
	cout << endl;

	
	system("pause");
	return 0;
}

