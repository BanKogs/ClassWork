#include <iostream>
#include <string>

int main()
{
	system("chcp 1251");
	std::string pink;
	std::cout << "������� ������: ";
	std::getline(std::cin, pink);

	pink.erase(pink.begin());
	std::cout << "������� ������ ������\n" << pink << std::endl;
	system("pause");

	pink.erase(pink.begin(), pink.begin() + 4);
	std::cout << "������� ������ 5 ���������\n" << pink << std::endl;
	system("pause");

	int element;
	std::cout << "�������� ������� ��� ��������" << std::endl;
	std::cin >> element;
	pink.erase(pink.begin() + element);
	std::cout << "������� �������� �������\n" << pink << std::endl;

	std::cout << "�������� ���������� ��������� ��� ��������" << std::endl;
	std::cin >> element;
	pink.erase(pink.begin(), pink.begin() + element);
	std::cout << "������� �������� ���������� ���������\n" << pink << std::endl;

	int element_end;
	std::cout << "�������� c ������ �� ����� ������� �������" << std::endl;
	std::cout << "��������� �������" << std::endl;
	std::cin >> element;
	std::cout << "��������� �������" << std::endl;
	std::cin >> element_end;
	pink.erase(pink.begin() + element, pink.begin() + element_end);
	std::cout << "������� �������� �������\n" << pink << std::endl;

	return 0;
}