#include <iostream>
#include <string>
#include <vector>

class ParamPhone
{
	int id;
	std::string color;
	int weight;
	int size;

public:

ParamPhone()
{
	id = 0;
	color = "grey";
	weight = 500;
	size = 4;
}
void printInfo()
{
	std::cout << "ID: " << id << "\t����: " << color << "\t���: " << weight << "\t������: " << size << std::endl;
}
int getId()
{
	return id;
}
void setId(int id_p)
{
	id = id_p;
}
std::string getColor()
{
	return color;
}
void setColor(std::string color_p)
{
	color = color_p;
}
int getWeight()
{
	return weight;
}
void setWeight(int weight_p)
{
	weight = weight_p;
}
int getSize()
{
	return size;
}
void setSize(int size_p)
{
	size = size_p;
}
};

int main()
{
	int amount, weight, size;
	std::string color;

	system("chcp 1251");
	std::cout << "������� ���-�� ����������� ���������: ";
	std::cin >> amount;
	std::cout << "������� ���� ������: ";
	std::cin >> color;
	std::cout << "������� ���: ";
	std::cin >> weight;
	std::cout << "������� ������: ";
	std::cin >> size;

	std::vector<ParamPhone> amount_phone(amount);

	for (int i = 0; i < amount_phone.size(); i++)
	{
		amount_phone.at(i).setId(i + 1);
		amount_phone.at(i).setColor(color);
		amount_phone.at(i).setWeight(weight);
		amount_phone.at(i).setSize(size);
	}

	for (int i = 0; i < amount_phone.size(); i++)
	{
		std::cout << "������: " << amount_phone.at(i).getId();
		std::cout << "\t����: " << amount_phone.at(i).getColor();
		std::cout << "\t���: " << amount_phone.at(i).getWeight();
		std::cout << "\t������: " << amount_phone.at(i).getSize() << std::endl;
	}
}