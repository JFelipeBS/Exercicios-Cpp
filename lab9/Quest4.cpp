#include<iostream>

using namespace std;

int main() {


	int distancia, metro,quilomet;
	
	cout << "Distancia em metros: ";
	cin >> distancia;

	quilomet = distancia/1000;
	metro = distancia % 1000;

	cout << distancia << " metros equivale a " << quilomet << " quilometros e " << metro << " metros" << endl;
	
	system("pause");
	return 0;
}
