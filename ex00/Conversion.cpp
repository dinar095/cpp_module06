#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::Conversion(char *av) : line(av)
{ }

float Conversion::toFloat() const
{
	return atof(line.c_str());
}

char Conversion::toChar() const
{
	return static_cast<char>(toFloat());
}

int Conversion::toInt() const
{
	return static_cast<int>(toFloat());
}

string Conversion::getValue() const
{
	return line;
}






std::ostream& operator<<(std::ostream& out, const Conversion& src)
{

	if (!isprint(src.toChar()) && isalnum(src.toFloat()))
		out << "char: Non displayable" << endl;
	else if (isprint(src.toChar()))
		out << "char: " << src.toChar() << endl;
	else
		out << "char: impossible" << endl;


	return out;
}