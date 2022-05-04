#include <iostream>
using namespace std;

enum estado{ vazio,cheio};
enum tipo { sopa,canja };

struct Tigela
{
	bool estado;
	bool tipo;

};

void Fome(Tigela* x);

int main() {


	Tigela cheia{1,0};

	cout << "O que deseja come:\n"
		"0 - sopa\n"
		"1 - caja\n"
		"opcao:[ ]\b\b";
	cin >> cheia.tipo;

	cout << endl;

	cout << "Antes da janta:\n";
	cout << "Prato ";
	if (cheia.estado == cheio)
		cout << "cheio";
	else
		cout << "vazio";

	cout << " de ";
	if (cheia.tipo == sopa)
		cout << "sopa";
	else
		cout << "canja";

	Tigela* pointer;
	pointer = &cheia;

	cout << endl;

	cout << "Depois da janta:\n";
	cout << "Prato ";
	Fome(pointer); 
	cout << " de ";
	if (cheia.tipo == sopa)
		cout << "sopa";
	else
		cout << "canja";

	cout << endl;
	system("pause");
	return 0;
}

void Fome(Tigela* x) {
	
	if (x->estado == cheio)
		cout << "Vazio";
	else
		cout << "Cheio";

}
