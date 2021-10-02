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
	return 0;
}
