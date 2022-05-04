#include<iostream>
#include<Windows.h>


using namespace std;

struct Horas
{
	short hora;
	short minuto;
	short segundo;
};

struct Data
{
	short dia;
	short mes;
	short ano;

};

struct evento
{
	Horas hora;
	Horas minuto;
	Horas segundo;
	Data dia;
	Data mes;
	Data ano;
	char local[30];
};




int main() {

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	evento xevento;
	char ponto;
	char barra;

	cout << "***Dados do evento***" << endl;
	cout << "Digite o horario segindo HH:MM:SS: ";
	cin >> xevento.hora.hora >> ponto >> xevento.minuto.minuto >> ponto >> xevento.segundo.segundo;
	cout << "Digite a data no formato DD/MM/AA: ";
	cin >> xevento.dia.dia >> barra >> xevento.mes.mes >> barra >> xevento.ano.ano;
	cin.ignore();
	cout << "Digite o local do evento: ";
	cin.getline(xevento.local, 30);
	cout << endl;

	system("cls");

	cout << "**Seu evento***" << endl;
	cout << "===============" << endl;
	cout << "Horário: " << xevento.hora.hora << ":" << xevento.minuto.minuto << ":" << xevento.segundo.segundo << endl;
	cout << "Data: " << xevento.dia.dia << "/" << xevento.mes.mes << "/" << xevento.ano.ano << endl;
	cout << "local: " << xevento.local;

	cout << endl;
	system("pause");
	return 0;
}