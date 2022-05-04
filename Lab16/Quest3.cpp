#include<iostream>

using namespace std;

int main() {

	int vet[]{ 46, 78, 40, 96, 74, 58, 32, 56, 91, 6};
	int* point1 = vet;
	int* point2 = &vet[1];

	int i, j;

	for (i = 0; i <= 9; i = i + 2)
	{
		
		cout << "[" << point1[i] << "," << point2[i] << "]" << " ";

	}
	


	cout << endl;
	system("pause");
	return 0;
}