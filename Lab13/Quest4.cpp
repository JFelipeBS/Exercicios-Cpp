#include <iostream>

using namespace std;


enum dias { Domingo, Segunda, Terca, Quarta, Quinta, Sexta, Sabado };


int main()
{
	char meses[7][8] =
	{
	"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"
	};

	for (dias ind = Domingo; ind <= Sabado; ind = dias(ind + 1))
		cout << meses[ind] << endl;

	return 0;
}
