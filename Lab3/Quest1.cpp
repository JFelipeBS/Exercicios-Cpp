#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	// Comando de acentua��o.
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float anos, cigarros, pre�o, Vgasto;

	cout << "A quantos anos voc� fuma? ";
	cin >> anos;
	cout << "Quantos cigarros voc� fuma por dia? ";
	cin >> cigarros;
	cout << "Qual o pre�o da carteira de cigarro? ";
	cin >> pre�o;
	
	//considerando uma que uma carteira de cigarro tem 20 cigarros.
	
	anos = anos * 365;
	
	//((pre�o / 20) * cigarros) corresponde ao valor unitario do cigarro.

	Vgasto = ((pre�o / 20) * cigarros) * anos;
	
	cout << "Voc� gastou at� agora " << Vgasto << " com cigarros." << endl;
	

	return 0;
}