#include<iostream>
#include<Windows.h>


using namespace std;

int main()
{
	SetConsoleCP(1252);
	SetConsoleOutputCP(1252);
	
	cout << " Existe diferença entre: int x; " << endl;
	cout.width(31); cout << "x = 1;" << endl;
	cout << "                            e" << endl;
	cout << "                        int y = 1; " << endl;
	cout << endl;
	
	cout << "Precione enter para ver a resposta.";
	cin.ignore();
	cout << endl;


	cout << "Na primeira forma a variável inicializara com o valor 0 e depois recebera o valor 1,\n";
	cout << "já a segunda a variável inicializarar diretamente com o valor 1.\n";
	cout << "Na minha opiniao não. Vai do gosto de cada programador, a não ser que haja a escolha de usar variavel local ou global\n";
	cout << "Analizando só a declaração delas, não havera diferença" << endl;


	

	system("pause");
	return 0;
}