#include<iostream>
#include<Windows.h>
using namespace std;

int main() {

	int h = 0;
	char asc[16][16];
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			asc[i][j] = h;
			h++;
		}
	}

	int** mat = new int* [16];

	for (int i = 0; i < 16; i++)
	{
		mat[i] = new int[16];
	}
	
	for (int i = 0; i < 16; i++)
	{
		for (int j = 0; j < 16; j++)
		{
			mat[i][j] = asc[i][j];
		}
	}

	cout << "Entre com as coordenadas da regiao de interesse:\n";
	cout << "De : ";
	int x, y;
	cin >> x; cin.ignore(); cin >> y;    
	cout << "De : ";
	int x2, y2;
	cin >> x2; cin.ignore(); cin >> y2;

	for (int i = x; i <= x2; i++)
	{
		int h = 0;
		for (int j = y; j <= y2; j++)
		{

			cout << char(mat[j][i]) << " ";

		}

		cout << endl;
	}



	system("pause");
	return 0;
}