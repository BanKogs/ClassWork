#include <iostream>
#include <string>
#include <fstream>

int main()
{
	system("chcp 1251");
	std::string karl;
	std::getline(std::cin, karl);
	std::cout << "���������� ��������: " << karl.size() << std::endl;

	system("pause");

	int count_lat = 0, count_kir = 0;
	std::cout << "��������: ";
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

	std::cout << "���������: ";
	for (int i = 0; i < karl.size(); i++)
	{
		if (karl.at(i) >= '�' && karl.at(i) <= '�' || karl.at(i) >= '�' && karl.at(i) <= '�')
		{
			//std::cout << "KIRRIL!";
			std::cout << karl.at(i) << " ";
			count_kir++;
		}
	}
	std::cout << std::endl;

	if (count_lat != 0)
	std::cout << "����������� � ���������: " << count_lat / (karl.size() / 100.0)  << std::endl;
	//system("pause");
	if (count_kir != 0)
	std::cout << "����������� � ���������: " << count_kir / (karl.size() / 100.0) << std::endl;

}