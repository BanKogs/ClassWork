#include <iostream>
#include <string>
#include <vector>

class MyClass
{
	std::string name;
	int age;
	int id;
	int level;
public:
	~MyClass()
	{
		std::cout << "DEL:" << this << std::endl;
	}
	MyClass(std::string name, int age, int id, int level)
	{
		std::cout << "CREATE:" << this << std::endl;
		this->name = name;
		this->age = age;
		this->id = id;
		this->level = level;
	}
	void edit()
	{
		std::cout << "���: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, name);
		do {
		std::cout << "��������: ";
		std::cin >> age;
		if (age < 16) {
			std::cout << "error";
		}
		} while (age > 16);
		std::cout << "�����: ";
		std::cin >> level;
	}
	void editName()
	{
		std::cout << "���: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, name);
	}
	void editAge()
	{
		do {
			std::cout << "��������: ";
			std::cin >> age;
			if (age < 16) {
				std::cout << "error";
			}
		} while (age < 16);
	}
	void editLevel()
	{
		std::cout << "�����: ";
		std::cin >> level;
	}
	void print()
	{
		std::cout << "���: " << name << "\t��������: " << age << "\tID: " << id << "\t�����: " << level << std::endl;
	}
};

int main()
{
	system("chcp 1251");
	system("cls");

	int choose = 0;
	std::string name;
	int age = 0, id = 0, level = 0, temp = 1;

	std::vector<MyClass> myvect;

	do {
	std::cout << "1. ����� ������ ���������\n";
	std::cout << "2. ������������� ��������\n";
	std::cout << "3. �������� ���������\n";
	std::cout << "4. ������� ��������\n";
	std::cin >> choose;

		switch (choose)
		{
		case 1:
			for (int i = 0; i < myvect.size(); i++)
			{
				std::cout << i+1 << ". ";
				myvect.at(i).print();
			}
			//std::cout << "�������� ���� ����������: ";
			//std::cin >> choose;
			break;
		case 2:
			std::cout << "�������� ��������: ";
			std::cin >> choose;
			std::cout << "1. �������� ��� ������\n";
			std::cout << "2. �������� ������ ���\n";
			std::cout << "3. �������� ������ ��������\n";
			std::cout << "4. �������� ������ �����\n";
			std::cin >> temp;
			if (temp == 1)
			{
				myvect.at(choose - 1).edit();
			}
			if (temp == 2)
			{
				myvect.at(choose - 1).editName();
			}
			if (temp == 3)
			{
				myvect.at(choose - 1).editAge();
			}
			if (temp == 4)
			{ 
				myvect.at(choose - 1).editLevel();
			}
			break;
		case 3:
			std::cout << "������� ��������� ��������: ";
			std::cin >> choose;
			for (int i = 0; i < choose; i++)
			{
				std::cout << "���: ";
				std::cin.ignore(1024, '\n');
				std::getline(std::cin, name);
				std::cout << "��������: ";
				std::cin >> age;
				std::cout << "�����: ";
				std::cin >> level;
				myvect.push_back(MyClass(name, age, myvect.size()+temp, level));
			}
			break;
		case 4:
			std::cout << "������� ����� ���������� ��������: ";
			std::cin >> choose;
			myvect.erase(myvect.begin() + choose-1);
			temp++;
			break;
		}
	} while (choose != 0);
}