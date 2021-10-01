#include <iostream>
#include "Conversion.hpp"



using std::cout;
using std::endl;

int main(int ac, char **av)
{

	if (ac == 2)
	{
		Conversion num(av[1]);
		std::cout << num << std::endl;
	}
	else
		cout << "Error arguments" << endl;

//	string tr = av[1];
//	float f = atof(tr.c_str());
//	cout << f << endl;
	return 0;
}
