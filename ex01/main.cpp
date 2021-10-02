#include <stdint.h>
#include <iostream>



using std::endl;
using std::string;
using std::cout;




struct Data
{
	int age;
	std::string name;
};

uintptr_t serialize(Data* ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data *>(raw);
}



int main()
{
	Data g = {15, "Jimmy"};
	Data *aftr;

	cout << "Before serialize: " << g.age << " " << g.name << endl;
	uintptr_t t = serialize(&g);
	cout << "After serialize: " << t << endl;
	aftr = deserialize(t);
	cout << "After deserialize: " << aftr->age << " " << aftr->name << endl;
	return 0;
}


