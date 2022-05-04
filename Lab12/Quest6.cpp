#include<iostream>
#include<Windows.h>

using namespace std;

struct Horas
{
	short hora;
	short minuto;
	
};

void exibir (Horas, Horas);
Horas ler();

int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	cout << "Digite o horario de entrada (HH:MM): ";
	Horas entrada = ler();
	cout << "Digite o horario de saida (HH:MM): ";
	Horas saida = ler();
	cout << endl;
	exibir(entrada, saida);

	cout << endl;
	system("pause");
	return 0;
}

Horas ler() {

	char ponto;

	Horas temp;
	cin >> temp.hora;
	cin >> ponto;
	cin >> temp.minuto;

	return temp;
}
void exibir(Horas x, Horas y) {
	
	unsigned short min, minto, m,m1,ho;

	m = (y.hora * 60 - (x.hora * 60));
	
	
	if (y.minuto > x.minuto) 
	{
		m1 = (y.minuto - x.minuto);
	}
	else {
		m1 = (x.minuto - y.minuto);
	}

	min = m - m1;
	ho = min / 60;
	minto = min % 60;

	
	cout << "Entre " << x.hora << ":" << x.minuto << " e " << y.hora << ":" << y.minuto << " existem " << min << " minutos, isto é, " << ho << "h e " << minto << " minutos";

}
