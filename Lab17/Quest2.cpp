#include<iostream>
using namespace std;

int main() {


	cout << "Voce que que eu conte ate quanto: ";
	int x;
	cin >> x;

	//contado
	for (int i = 0; i < x ; i++)
	{
		cout << 1 + i << " ";
	}
	cout << endl;
	
	//contado inverso
	for (int i = x; i > 0; i--)
	{
		cout << i << " ";
	}
	cout << endl;

	//contado so os impares
	for (int i = 0; i < x; i = i + 2)
	{
		cout << 1 + i << " ";
	}
	cout << endl;

	//contado so os impares inverso
	for (int i = x-1; i > 0; i = i - 2)
	{
		cout << i << " ";
	}
	cout << endl;

	//contado so os pares
	for (int i = 0; i < x; i = i + 2)
	{
		cout << 2 + i << " ";
	}
	cout << endl;

	//contado so os inverso
	for (int i = x; i > 0; i = i - 2)
	{
		cout << i << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}

