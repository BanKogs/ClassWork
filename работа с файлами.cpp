#include <iostream>
#include <string>
#include <fstream>

int main()
{
	system("chcp 1251");
	std::ifstream hardy("d://test.txt");
	std::string wrap;
	std::getline(hardy, wrap, '\0');
	hardy.close();
	system("pause");
	std::cout << wrap;
	wrap += "\ntest2";
	std::ofstream hardy_out("d://test.txt");
	hardy_out << wrap;
	hardy_out.close();
}