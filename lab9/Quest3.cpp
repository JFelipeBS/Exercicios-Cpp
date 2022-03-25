#include<iostream>

using namespace std;

int main() {


	float a,b;
	int c;
	cout<<"Digite um numero real: ";
	cin >> a;  

	c = a;
	b = a - c;

	cout << "A parte inteira: " << c << endl;
	cout << "A parte fracionaria: " << b << endl;

	system("pause");
	return 0;
}
