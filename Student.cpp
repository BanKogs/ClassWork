#include "Student.h";

Student::Student()
{
	name = "test";
	age = 0;
	id = 0;
	level = 0;
	std::cout << "объект класса Student создан: " << this << std::endl;
}

Student::~Student()
{
	std::cout << "объект класса Student удалён: " << this << std::endl;
}

void Student::edit()
{
	std::cout << "имя: \n";
	std::cin.ignore(1024, '\n');
	std::getline(std::cin, name);
	std::cout << "возвраст: \n";
	std::cin >> age;
	std::cout << "идентификатор: \n";
	std::cin >> id;
	std::cout << "класс обучения: \n";
	std::cin >> level;
}
void Student::printInfo()
{
	std::cout << "\n\nимя: " << name << "\nвозвраст: " << age << "\nидентификатор: " << id << "\nкласс обучения: " << level;
}
