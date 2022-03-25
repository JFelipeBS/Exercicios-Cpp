#include<iostream>
#include<windows.h>

using namespace std;

int main()
{
	// Comando de acentuação.
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);

	float anos, cigarros, preço, Vgasto;

	cout << "A quantos anos você fuma? ";
	cin >> anos;
	cout << "Quantos cigarros você fuma por dia? ";
	cin >> cigarros;
	cout << "Qual o preço da carteira de cigarro? ";
	cin >> preço;
	
	//considerando uma que uma carteira de cigarro tem 20 cigarros.
	
	anos = anos * 365;
	
	//((preço / 20) * cigarros) corresponde ao valor unitario do cigarro.

	Vgasto = ((preço / 20) * cigarros) * anos;
	
	cout << "Você gastou até agora " << Vgasto << " com cigarros." << endl;
	

	return 0;
}