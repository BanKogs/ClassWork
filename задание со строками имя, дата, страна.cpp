#include <iostream>
#include <string>

int main()
{
	system("chcp 1251");
	std::string name, country;
	int age, day, mouth, years;

	std::cout << "���: ";
	std::cin >> name;
	std::cout << "����, �����, ���: \n";
	std::cin >> day >> mouth >> years;
	std::cout << "������: ";
	std::cin >> country;

	age = 2022 - years;

	std::cout << "������ " << name << " �� " << country << " " << day << "." << mouth << "." << years << ", ���� ������� " << age;


}