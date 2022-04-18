#include <iostream>
#include <string>

int main()
{
	system("chcp 1251");
	std::string name, country;
	int age, day, mouth, years;

	std::cout << "имя: ";
	std::cin >> name;
	std::cout << "день, месяц, год: \n";
	std::cin >> day >> mouth >> years;
	std::cout << "страна: ";
	std::cin >> country;

	age = 2022 - years;

	std::cout << "привет " << name << " из " << country << " " << day << "." << mouth << "." << years << ", твой возраст " << age;


}