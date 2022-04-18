#include <iostream>
#include <fstream>


int main()
{
	system("chcp 1251");
	std::ifstream karl("test.txt");
	while (!karl.eof())
	{
		std::string lenny;
		karl >> lenny;
		std::cout << lenny << " ";
	}


	return 0;
}