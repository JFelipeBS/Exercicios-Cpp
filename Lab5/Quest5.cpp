#include<iostream>
#include<Windows.h>
#include<cmath>


using namespace std;

double Angulo(double x, double y);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	double x, y;

	cout << "Digite as cordenadas (x,y): ";
	cin >> x; cin.ignore(); cin >> y;
	cout << "O ângulo do vetor é " << Angulo(x, y) << endl;


	system("pause");
	return 0;
}

double Angulo(double x, double y){

	double ang = (atan (y/x) * 180)/ 3.141592;

	return ang;
}