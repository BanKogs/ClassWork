#include <iostream>
#include <string>
#include <vector>
#include "Student.h"

int main()
{
	system("chcp 1251");
	int size;
	std::cout << "введите количество студентов: \n";
	std::cin >> size;
	Student users;
	std::vector<Student> listusers(size);

	for (int i = 0; i < listusers.size(); i++)
	{
		listusers.at(i).edit();
	}
	std::cout << std::endl;

	std::cout << "\nсписок студентов: ";
	for (int i = 0; i < listusers.size(); i++)
	{
		listusers.at(i).printInfo();
	}
	std::cout << std::endl;

	return 0;
}