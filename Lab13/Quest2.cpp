#include<iostream>

using namespace std;

struct jogador{

	char nome[25];
	int numero; 
};

struct gol
{
	jogador jog;
	int hora, min;
};



int main() {

	gol jog[3];

	cout << "digite os dados dos 3 ultmos gols: " << endl;

	for (short i = 0; i <=2 ; i++)
	{
		cout << "#" << i + 1 << endl;
		cout << "Nome: ";
		cin.getline(jog[i].jog.nome, 25);
		cout << "Hora do gol:";
		cin >> jog[i].hora; cin.ignore(); cin >> jog[i].min;
		cin.ignore();
	}

	cout << endl;
	cout << "===============================";
	cout << endl;


	for (int i = 0; i <=2 ; i++)
	{
		cout << "Gol: " << jog[i].jog.nome << " " << jog[i].hora << ":"; 
		if (jog[i].min == 0) 
		{ 
			cout << "00";
		}
		else 
		{ 
			cout << jog[i].min;
		}
		cout << endl;
	}


	system("pause");
	return 0;
}