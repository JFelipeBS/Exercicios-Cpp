#include<iostream>

using namespace std;

int main() {

	int* x = new int{ 100 };
	cout << "O valor e: " << *x;
	cout << endl;

	cout << "Digite um valor para esse novo bloco de memoria: ";
	cin >> *x;
	cout << "O novo valor e: " << *x;
	cout << endl;

	delete x;

	cout << endl;
	system("pause");
	return 0;
}