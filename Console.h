#pragma once

int Console(std::string str, int& num)
{
	std::cout << str;
	std::cin >> num;
	return num;
}

void sum(int a, int b)
{
	std::cout << a + b;
}
