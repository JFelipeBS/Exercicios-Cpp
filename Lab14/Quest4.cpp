#include<iostream>

using namespace std;

enum tipomagem{JPG=1,PNG,BMP};

struct Imagem
{
	char nome[15];
	float largura, altura;
	tipomagem tipo;
};

void Detalhes(short* a, Imagem b);

int main() {

	Imagem test;
	cout << "nome da imagem: ";
	cin >> test.nome;

	cout << "Altura: ";
	cin >> test.altura;

	cout << "Largura: ";
	cin >> test.largura;

	cout << "Qual o tipo?" << endl;
	cout << " 1-JPG\n 2-PNG\n 3-BMP" << endl;
	short num;
	cin >> num;

	Detalhes(&num, test);
	cout << endl;



	system("pause");
	return 0;
}

void Detalhes(short* a, Imagem b)
{
	if (*a == JPG)
		cout << "A imagem " << b.nome << ".jpg " << "com tamanho " << b.altura << " x " << b.largura << " tem formato JPG";

	if (*a == PNG)
		cout << "A imagem " << b.nome << ".png " << "com tamanho " << b.altura << " x " << b.largura << " tem formato PNG";

	if (*a == BMP)
		cout << "A imagem " << b.nome << ".bmp " << "com tamanho " << b.altura << " x " << b.largura << " tem formato BMP";
}
