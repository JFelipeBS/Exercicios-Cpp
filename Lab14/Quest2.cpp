#include <iostream>
using namespace std;

struct Horario
{
	short hora;
	short min;
};

int main();

void mostrar_horario(Horario* x);


int main() {

	Horario var;
	Horario* p;
	p = &var;
	

	cout << "Qual o horario (HH:MM):";
	cin >> var.hora; cin.ignore(); cin >> var.min;
	p->hora = (p->hora)++;
	mostrar_horario(p);
	cout << endl;

	system("pause");
	return 0;
}

void mostrar_horario(Horario* x) {

	cout << "Seu relogio esta atrassado, o horario correto e " << x->hora << ":" << x->min << endl;
}
