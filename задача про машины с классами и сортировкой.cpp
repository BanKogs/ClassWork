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
		std::cout << "\nмодель: " << model << "\nпробег: " << run << "\nгод выпуска: " << year << "\nстрана-производитель: " 
			<< country << "\nмощность: " << power << std::endl;
	}
	void edit()
	{
		system("cls");
		std::cout << "введите модель: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, model);
		std::cout << "введите пробег: ";
		std::cin >> run;
		std::cout << "введите год выпуска: ";
		std::cin >> year;
		std::cout << "введите страну-производитель: ";
		std::cin.ignore(1024, '\n');
		std::getline(std::cin, country);
		std::cout << "введите мощность: ";
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
	std::cout << "количество вводимых автомобилей: ";
	std::cin >> size;
	std::vector<Cars> cars(size);

	for (int i = 0; i < cars.size(); i++)
	{
		cars.at(i).edit();
	}

	std::cout << "список: ";
	for (int i = 0; i < cars.size(); i++)
	{
		cars.at(i).print();
	}
	std::cout << std::endl;

	std::cout << "сортировка: ";
	sort(cars);
	for (int i = 0; i < cars.size(); i++)
	{
		cars.at(i).print();
	}
	std::cout << std::endl;

	return 0;
}
