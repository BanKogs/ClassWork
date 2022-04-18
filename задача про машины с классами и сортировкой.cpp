#include <iostream>
#include <string>
#include <vector>     

class Cars
{
	std::string model;
	int run;
	int year;
	std::string country;
	int power;

public:
	void print()
	{
		std::cout << "\n������: " << model << "\n������: " << run << "\n��� �������: " << year << "\n������-�������������: " 
			<< country << "\n��������: " << power << std::endl;
	}
	void edit()
	{
		system("cls");
		std::cout << "������� ������: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, model);
		std::cout << "������� ������: ";
		std::cin >> run;
		std::cout << "������� ��� �������: ";
		std::cin >> year;
		std::cout << "������� ������-�������������: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, country);
		std::cout << "������� ��������: ";
		std::cin >> power;
		system("cls");
	}
	int getYear()
	{
		return year;
	}
};

void sort(std::vector<Cars>&cars)
{
	for (int i = 0; i < cars.size(); i++)
	{
		for (int j = 0; j < cars.size()-1-i; j++)
		{
			if (cars.at(j).getYear() > cars.at(j + 1).getYear());
			{
				Cars tmp;
				tmp = cars.at(j);
				cars.at(j) = cars.at(j + 1);
				cars.at(j + 1) = tmp;
			}
		}
	}
}

int main()
{
	system("chcp 1251");
	int size;
	std::cout << "���������� �������� �����������: ";
	std::cin >> size;
	std::vector<Cars> cars(size);

	for (int i = 0; i < cars.size(); i++)
	{
		cars.at(i).edit();
	}

	std::cout << "������: ";
	for (int i = 0; i < cars.size(); i++)
	{
		cars.at(i).print();
	}
	std::cout << std::endl;

	std::cout << "����������: ";
	sort(cars);
	for (int i = 0; i < cars.size(); i++)
	{
		cars.at(i).print();
	}
	std::cout << std::endl;

	return 0;
}
