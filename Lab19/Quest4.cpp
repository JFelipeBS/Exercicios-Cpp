#include<iostream>

using namespace std;

void exibirvetor(int vet[]);

int main() {

	int mat[2][3] =
	{
	{1,2,3},
	{4,5,6}
	};

	exibirvetor(mat[0]);





	cout << endl;
	system("pause");
	return 0;
}
void exibirvetor(int vet[]) {

	for (int i = 0; i < 6; i++)
	{
		cout << vet[i];
		cout << endl;
	}



}