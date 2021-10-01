#ifndef CPP_MODULE04_CONVERSION_HPP
#define CPP_MODULE04_CONVERSION_HPP
#include <iostream>
#include <math.h>

using std::string;
using std::endl;

class Conversion
{
private:
	string line;
	void convert();
public:
	Conversion();
	~Conversion() {};
	Conversion(char *av);
	int toInt() const;
	char toChar() const;
	string getValue() const;
	string strChar() const;
	float toFloat() const;
	double toDouble() const;

};

std::ostream& operator<<(std::ostream& out, const Conversion& src);


#endif //CPP_MODULE04_CONVERSION_HPP
