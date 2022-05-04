#include<iostream>

using namespace std;

int main() {

	int vet[]{ 32, 16, 47, 10, 82, 29, 30, 28, 15, 64 };


	int i, j;

	for (i = 0, j = 9; i <= 4; i = i++, j--) {
		cout << "[" << vet[i] << "," << vet[j] << "]";
	}



	cout << endl;
	system("pause");
	return 0;
}