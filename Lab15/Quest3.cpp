#include<iostream>

using namespace std;

int main() {

	cout << "Quanto inteiros voce deseja armazenar:";
	int num;
	cin >> num;

	int* vet = new int[num];

	cout << "Quais os valores? ";
	for (int i = 0; i < num ; i++)
	{
		cin >> *(vet + i);
	}

	cout << "Os valores "; 
	for (int i = 0; i < num; i++)
	{
		cout << *(vet + i) << " ";
	}
	cout << "foram armazenados.";
	
	
	cout << endl;

	delete[] vet;
	system("pause");
	return 0;
}