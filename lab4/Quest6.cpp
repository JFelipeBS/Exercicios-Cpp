#include <iostream>
#include<Windows.h>
#include<random>


using namespace std;

int Inicializar();
void Ligar();
void Verificar();
void Ativar();

int main()
{

	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	Inicializar();

	cout << endl;

	system("pause");

	return 0;
}

int Inicializar()
{
	random_device rd;
	mt19937 mt(rd());
	uniform_int_distribution<int> dis(0, 32767);
	int x = dis(mt);

	cout << "Inicializando Sistema:" << endl;
	Ligar();
	cout << endl;
	Verificar();
	cout << endl;
	Ativar();
	cout << endl;

	cout << "Inicializa��o concluida" << endl;

	if (x > 16384) {
		cout << endl;
		cout << endl;

		cout << "Sistema em funcionamento";

		cout << endl;
		cout << endl;

	}
	else{
		cout << endl;
		cout << endl;

		cout << "Falha na inicializa��o";

		cout << endl;
		cout << endl;

	}

	return x;
}

void Ligar() {
	cout << " #Ligando dispositivos:";
}

void Verificar() {
	cout << " #Verificando integridade";

}

void Ativar() {
	cout << " #Ativando processos";

}