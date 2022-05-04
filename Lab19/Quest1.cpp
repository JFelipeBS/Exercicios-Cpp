#include<iostream>

using namespace std;

int main() {

	int max[4][4] = {

		{3,1,5,5},
		{1,5,5,6},
		{2,3,4,5},
		{4,9,1,8}
	};

	int soma[4]{};

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout << max[i][j] << " ";
	
		}
		cout << endl;
	}
	cout << endl;

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			soma[i] += max[j][i];

		}
		
	}

	cout << "A soma das colunas e: ";
	for (int i = 0; i < 4; i++)
	{
		cout<<soma[i]<<" ";
	}





	system("pause");
	return 0;
}