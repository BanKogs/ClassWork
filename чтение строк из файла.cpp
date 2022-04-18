#include <iostream>
#include <fstream>
#include <string>

void test()
{
	std::string line;
	std::ifstream ten("\\\\desktop-vv4jvhh\\Share\\C++\\net\\input.txt");
	std::getline(ten, line, '\0');
	ten.close();
	system("cls");
	std::cout << line << std::endl;
}

int main()
{
	system("chcp 1251");
	char user;
	do {
		std::cout << "продожить? (y/n) " << std::endl;
		std::cin >> user;

		if (user == 'y')
		{
			test();
			system("pause");
			system("cls");
		}
		else
		{
			system("cls");
		}
	} while (user != 'n');

	std::cout << "пока ;)";

	return 0;
}