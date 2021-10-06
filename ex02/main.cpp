#include <iostream>
#include <cstdlib>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

using std::cout;
using std::endl;

Base * generate(void)
{
	srand(static_cast<unsigned int>(time(0)));
	switch (rand() % 3)
	{
		case 0: return new A;
		case 1: return new B;
		case 2: return new C;
	}
	return NULL;
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p))
		cout << "Type A" << endl;
	else if (dynamic_cast<B*>(p))
		cout << "Type B" << endl;
	else if (dynamic_cast<C*>(p))
		cout << "Type C" << endl;
}

void identify(Base& p)
{
	try
	{
		A val;
		val = dynamic_cast<A&>(p);
		cout << "Type A" << endl;
	}
	catch (const std::exception& e) {}
	try
	{
		B val;
		val = dynamic_cast<B&>(p);
		cout << "Type B" << endl;
	}
	catch (const std::exception& e) {}
	try
	{
		C val;
		val = dynamic_cast<C&>(p);
		cout << "Type C" << endl;
	}
	catch (const std::exception& e) {}
}

int main()
{
	Base *smth;
	smth = generate();
	identify(smth);
	identify(*smth);
}