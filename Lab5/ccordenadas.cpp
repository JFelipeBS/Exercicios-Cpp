#include<cmath>

double Angulo(double x, double y) {

	double ang = (atan(y / x) * 180) / 3.141592;

	return ang;
}

double Vetor(int x, int y)
{
	double vet = sqrt(pow(x, 2) + pow(y, 2));


	return vet;
}