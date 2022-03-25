#include<iostream>
#include<Windows.h>

using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);



	cout << "====================================================" << endl;
	cout << "\t\t\  VOLUME DO PRISMA " << endl;
	cout << "====================================================" << endl;

	double ladoa, ladob, areaB, altura, volume;

	cout << "Lado a: ";
	cin >> ladoa;
	cout << "Lado b: ";
	cin >> ladob;
	areaB = ladoa * ladob;
	cout << "Área da base = " << areaB << endl;
	cout << "Altura: ";
	cin >> altura;
	volume = areaB * altura;
	cout << "Volume do prisma = " << volume;





	return 0;
}