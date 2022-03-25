#include<iostream>

using namespace std;

int main() {

	float a = 3.78575f * 8.129338f;
	float b = 3e30f + 2e15f;
	float c = 20518.56f * 2.0f;
	float d = 3.14159f + 1.45f;
	float e = 2.0f * 1e30f;

	cout.fixed;
	cout.precision(8);

	cout << "Numeros guardados em FLOAT:" << endl;

	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << d << endl;
	cout << e << endl;
	cout << endl;

	double f = 3.78575 * 8.129338;
	double g = 3e30 + 2e15;
	double h = 20518.56 * 2.0;
	double i = 3.14159 + 1.45;
	double j = 2.0 * 1e30;

	cout << "Numeros guardados em DOUBLE:" << endl;

	cout << f << endl;
	cout << g << endl;
	cout << h << endl;
	cout << i << endl;
	cout << j << endl;
	cout << endl;

	cout << "Como a precisao de DOUBLE e maior que a de FLOAT podemos observar que todos ";
	cout << "os numeros vao ter erro de precisao,com excecao do ultimo numero que permanece com precisao." << endl;



}