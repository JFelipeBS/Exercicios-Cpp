#include<iostream>

using namespace std;

struct Data
{
	short dia, mes, ano;
};

struct Horario
{
	short hora, min;
};

struct Descricao
{
	char local[18];
};

struct evento
{
	Data dat;
	Horario hora;
	Descricao desc;
};

int main() {

	evento mossoro[10];

	for (int i = 0; i <=1 ; i++)
	{
		cout << "Entre com dois eventos:" << endl;
		cout << "#" << i+1 << endl;
		cout << "Data: ";
		cin >> mossoro[i].dat.dia; cin.ignore(); cin >> mossoro[i].dat.mes; cin.ignore(); cin >> mossoro[i].dat.ano;
		cout << "Hora: ";
		cin >> mossoro[i].hora.hora; cin.ignore(); cin >> mossoro[i].hora.min;
		cin.ignore();
		cout << "Descricao: ";
		cin.getline(mossoro[i].desc.local, 18);
		
	}
		
		cout << "-----------------------------" << endl;
		cout << "Eventos Cadastrados" << endl;

	for (int i = 0; i <=1 ; i++)
	{
		
		cout << mossoro[i].dat.dia << "/" << mossoro[i].dat.mes << "/" << mossoro[i].dat.ano << " " << mossoro[i].hora.hora << ":" << mossoro[i].hora.min << " " << mossoro[i].desc.local << endl;
		 
	}


	system("pause");
	return 0;
}