#include<iostream>
#include<Windows.h>

using namespace std;

int Hora(int horaC, int horaS, int minutoS, int minutoC);
int Minuto(int horaC, int horaS, int minutoS, int minutoC);

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	unsigned int horaS, minutoS, horaC, minutoC;

	cout << "Digite a hora da partida (HH:MM): ";
	cin >> horaS; cin.ignore(); cin >> minutoS;
	
	cout << "Digite a hora da chegada (HH:MM): ";
	cin >> horaC; cin.ignore(); cin >> minutoC;
	cout << endl;

	cout << "O tempo de viadem foi " << Hora(horaS, horaC, minutoC, minutoS) << " horas e "<< Minuto(horaS, horaC, minutoC, minutoS) << " min" << endl;

	system("pause");
	return 0;
}


int Hora(int horaC, int horaS, int minutoS, int minutoC) {

	unsigned int horamin, minh;

	horamin = (((horaS - horaC) * 60) + (minutoS - minutoC)) / 60;
	
	return horamin;
}

int Minuto(int horaC, int horaS, int minutoS, int minutoC) {

	unsigned int minh;

	minh = (((horaS - horaC) * 60) + (minutoS - minutoC)) % 60;

	return minh;

}
