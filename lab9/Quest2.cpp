#include<iostream>

using namespace std;

int main() {

	int a, b, quociente,resto;

	
	
	cout << "digite os numeros inteiros: ";
	cin >> a; cin >> b;
	

	quociente = a / b;
	resto = a % b;

	cout << "O quociente de " << a << "/" << b << " e " << quociente << endl;
	cout << "O resto de " << a << "%" << b << " e " << resto << endl;

	system("pause");
	return 0;
}
