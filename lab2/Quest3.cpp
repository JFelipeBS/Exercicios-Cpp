#include<iostream>

using namespace std;

int main()
{

	
	cout << left; cout.width(11); cout << "Produto";
	cout << right; cout.width(4); cout << "Preço/Kg";
	cout.width(15); cout << "Pedido (Kg)";
	cout.width(17); cout << "Total Parcial";
	cout << endl;

	cout << left; cout.width(11); cout << "--------";
	cout << right; cout.width(4); cout << "---------";
	cout.width(15); cout << "------------";
	cout.width(17); cout << "--------------"<< endl;

	cout << left; cout.width(11); cout << "Alface";
	cout << right; cout.width(4); cout << "R$ 1,25/Kg";
	cout.width(7); cout<<"3,2kg";
	cout.width(16); cout << "R$4,00";
	cout << endl;

	cout << left; cout.width(11); cout << "Beterraba";
	cout << right; cout.width(4); cout << "R$ 0,65/Kg";
	cout.width(7); cout<<"6,0kg";
	cout.width(16); cout << "R$3,90";
	cout << endl;

	cout << left; cout.width(11); cout << "Cenoura";
	cout << right; cout.width(4); cout << "R$ 0,90/Kg";
	cout.width(6); cout<<"10kg";
	cout.width(17); cout << "R$9,00";
	cout << endl;

	
	return 0;
}