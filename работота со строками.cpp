#include <iostream>
#include <string>
#include <fstream>

int main()
{
	system("chcp 1251");
	std::string karl;
	std::getline(std::cin, karl);
	std::cout << "количество символов: " << karl.size() << std::endl;

	system("pause");

	int count_lat = 0, count_kir = 0;
	std::cout << "латиница: ";
	for (int i = 0; i < karl.size(); i++)
	{
		if (karl.at(i) >= 'A' && karl.at(i) <= 'Z' || karl.at(i) >= 'a' && karl.at(i) <= 'z')
		{
			//std::cout << "LATIN!";
			std::cout << karl.at(i) << " ";
			count_lat++;
		}		
	}
	std::cout << std::endl;

	std::cout << "кириллица: ";
	for (int i = 0; i < karl.size(); i++)
	{
		if (karl.at(i) >= 'А' && karl.at(i) <= 'Я' || karl.at(i) >= 'а' && karl.at(i) <= 'я')
		{
			//std::cout << "KIRRIL!";
			std::cout << karl.at(i) << " ";
			count_kir++;
		}
	}
	std::cout << std::endl;

	if (count_lat != 0)
	std::cout << "соотношение в процентах: " << count_lat / (karl.size() / 100.0)  << std::endl;
	//system("pause");
	if (count_kir != 0)
	std::cout << "соотношение в процентах: " << count_kir / (karl.size() / 100.0) << std::endl;

}