#include "Student.h";

Student::Student()
{
	name = "test";
	age = 0;
	id = 0;
	level = 0;
	std::cout << "������ ������ Student ������: " << this << std::endl;
}

Student::~Student()
{
	std::cout << "������ ������ Student �����: " << this << std::endl;
}

void Student::edit()
{
	std::cout << "���: \n";
	std::cin.ignore(1024, '\n');
	std::getline(std::cin, name);
	std::cout << "��������: \n";
	std::cin >> age;
	std::cout << "�������������: \n";
	std::cin >> id;
	std::cout << "����� ��������: \n";
	std::cin >> level;
}
void Student::printInfo()
{
	std::cout << "\n\n���: " << name << "\n��������: " << age << "\n�������������: " << id << "\n����� ��������: " << level;
}
