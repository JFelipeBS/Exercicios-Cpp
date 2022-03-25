#include<iostream>


int main()
{

	unsigned short x = 1;
	x = x + 32767;
	std::cout << "x = " << x << std::endl;

	unsigned int y = 2147483647;
	y = y + 1;
	std::cout << "Y = " << y << std::endl;

	system("pause");
	return 0;
}