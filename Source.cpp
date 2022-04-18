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
		std::cout << "имя: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, name);
		do {
		std::cout << "возвраст: ";
		std::cin >> age;
		if (age < 16) {
			std::cout << "error";
		}
		} while (age > 16);
		std::cout << "класс: ";
		std::cin >> level;
	}
	void editName()
	{
		std::cout << "имя: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, name);
	}
	void editAge()
	{
		do {
			std::cout << "возвраст: ";
			std::cin >> age;
			if (age < 16) {
				std::cout << "error";
			}
		} while (age < 16);
	}
	void editLevel()
	{
		std::cout << "класс: ";
		std::cin >> level;
	}
	void print()
	{
		std::cout << "имя: " << name << "\tвозвраст: " << age << "\tID: " << id << "\tкласс: " << level << std::endl;
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
	std::cout << "1. вывод списка студентов\n";
	std::cout << "2. редактировать студента\n";
	std::cout << "3. добавить студентов\n";
	std::cout << "4. удалить студента\n";
	std::cin >> choose;

		switch (choose)
		{
		case 1:
			for (int i = 0; i < myvect.size(); i++)
			{
				std::cout << i+1 << ". ";
				myvect.at(i).print();
			}
			//std::cout << "выберите поле сортировки: ";
			//std::cin >> choose;
			break;
		case 2:
			std::cout << "выберите студента: ";
			std::cin >> choose;
			std::cout << "1. изменить все данные\n";
			std::cout << "2. изменить только имя\n";
			std::cout << "3. изменить только возвраст\n";
			std::cout << "4. изменить только класс\n";
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
			std::cout << "сколько студентов добавить: ";
			std::cin >> choose;
			for (int i = 0; i < choose; i++)
			{
				std::cout << "имя: ";
				std::cin.ignore(1024, '\n');
				std::getline(std::cin, name);
				std::cout << "возвраст: ";
				std::cin >> age;
				std::cout << "класс: ";
				std::cin >> level;
				myvect.push_back(MyClass(name, age, myvect.size()+temp, level));
			}
			break;
		case 4:
			std::cout << "введите номер удаляемого студента: ";
			std::cin >> choose;
			myvect.erase(myvect.begin() + choose-1);
			temp++;
			break;
		}
	} while (choose != 0);
}