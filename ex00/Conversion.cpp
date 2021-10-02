
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

double Conversion::toDouble() const {
	return static_cast<double>(toFloat());
}


std::ostream& operator<<(std::ostream& out, const Conversion& src)
{

	if (!isnan(src.toFloat()) && !isprint(src.toChar()) && !isinf(src.toFloat()))
		out << "char: Non displayable" << endl;
	else if (isprint(src.toChar()))
		out << "char:	" << src.toChar() << endl;
	else
		out << "char: impossible" << endl;

	if (isnan(src.toFloat()) || src.toFloat() >= 2147483646 || src.toFloat() <= -2147483648)
		out << "int: impossible" << endl;
	else
		out << "int:	" << src.toInt() << endl;

	if (src.toFloat() - src.toInt() == 0)
	{
		out << "Float:	" << src.toFloat() << ".0f" << endl;
		out << "Double:	" << src.toDouble() << ".0" << endl;
	}
	else
	{
		out << "Float:	" << src.toFloat() << "f" << endl;
		out << "Double:	" << src.toDouble() << endl;
	}


	return out;
}