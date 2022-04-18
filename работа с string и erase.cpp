#include <iostream>
#include <string>

int main()
{
	system("chcp 1251");
	std::string pink;
	std::cout << "введите строку: ";
	std::getline(std::cin, pink);

	pink.erase(pink.begin());
	std::cout << "удаляем первый символ\n" << pink << std::endl;
	system("pause");

	pink.erase(pink.begin(), pink.begin() + 4);
	std::cout << "удаляем первые 5 элементов\n" << pink << std::endl;
	system("pause");

	int element;
	std::cout << "выберите элемент для удаления" << std::endl;
	std::cin >> element;
	pink.erase(pink.begin() + element);
	std::cout << "удаляем заданный элемент\n" << pink << std::endl;

	std::cout << "выберите количество элементов для удаления" << std::endl;
	std::cin >> element;
	pink.erase(pink.begin(), pink.begin() + element);
	std::cout << "удаляем заданный количество элементов\n" << pink << std::endl;

	int element_end;
	std::cout << "выберите c какого по какой элемент удалить" << std::endl;
	std::cout << "начальный элемент" << std::endl;
	std::cin >> element;
	std::cout << "последний элемент" << std::endl;
	std::cin >> element_end;
	pink.erase(pink.begin() + element, pink.begin() + element_end);
	std::cout << "удаляем заданный элемент\n" << pink << std::endl;

	return 0;
}