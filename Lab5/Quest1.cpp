#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	cout << " Existe diferen�a entre: int x; " << endl;
	cout.width(31); cout << "x = 1;" << endl;
	cout << "                            e" << endl;
	cout << "                        int y = 1; " << endl;
	cout << endl;
	
	cout << "Precione enter para ver a resposta.";
	cin.ignore();
	cout << endl;


	cout << "Na primeira forma a vari�vel inicializara com o valor 0 e depois recebera o valor 1,\n";
	cout << "j� a segunda a vari�vel inicializarar diretamente com o valor 1.\n";
	cout << "Na minha opiniao n�o. Vai do gosto de cada programador, a n�o ser que haja a escolha de usar variavel local ou global\n";
	cout << "Analizando s� a declara��o delas, n�o havera diferen�a" << endl;


	

	system("pause");
	return 0;
}