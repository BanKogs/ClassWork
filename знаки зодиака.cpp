#include <iostream>
#include <string>

struct Happy
{
	std::string firstname;
	std::string lastname;
	int day;
	int mouth;
	int year;
};

int main()
{
	Happy check;
	system("chcp 1251");
	std::cout << "������� ���� �������� (����, �����, ���): " << std::endl;
	std::cin >> check.day >> check.mouth >> check.year;
	std::cin.ignore(1024, '\n');
	std::cout << "������� ���: ";
	std::getline(std::cin, check.firstname);
	std::cout << "������� �������: ";
	std::getline(std::cin, check.lastname);

	int age = 2022 - check.year;
	std::string zodiac;

	if (check.mouth == 1 && check.day < 22 || check.mouth == 12 && check.day > 22)
		zodiac = "�������";
	if (check.mouth == 2 && check.day < 22 || check.mouth == 1 && check.day > 22)
		zodiac = "�������";
	if (check.mouth == 3 && check.day < 22 || check.mouth == 2 && check.day > 22)
		zodiac = "����";
	if (check.mouth == 4 && check.day < 22 || check.mouth == 3 && check.day > 22)
		zodiac = "����";
	if (check.mouth == 5 && check.day < 22 || check.mouth == 4 && check.day > 22)
		zodiac = "�����";
	if (check.mouth == 6 && check.day < 22 || check.mouth == 5 && check.day > 22)
		zodiac = "��������";
	if (check.mouth == 7 && check.day < 22 || check.mouth == 6 && check.day > 22)
		zodiac = "���";
	if (check.mouth == 8 && check.day < 22 || check.mouth == 07 && check.day > 22)
		zodiac = "���";
	if (check.mouth == 9 && check.day < 22 || check.mouth == 8 && check.day > 22)
		zodiac = "����";
	if (check.mouth == 10 && check.day < 22 || check.mouth == 9 && check.day > 22)
		zodiac = "����";
	if (check.mouth == 11 && check.day < 22 || check.mouth == 10 && check.day > 22)
		zodiac = "��������";
	if (check.mouth == 12 && check.day < 22 || check.mouth == 11 && check.day > 22)
		zodiac = "�������";

	system("cls");
	std::cout << "���� ��� � �������: " << check.firstname << " " << check.lastname << "\n"
		<< "��� ���: " << age << "\n"
		<< "��� ���� �������: " << zodiac << std::endl;
}