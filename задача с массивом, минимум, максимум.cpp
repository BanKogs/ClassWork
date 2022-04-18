#include <iostream>

int main()
{
	system("chcp 1251");
	int size = 0;
	std::cout << "размер массива: ";
	std::cin >> size;

	int* maks = new int[size];
	for (int i = 0; i < size; i++)
	{
		std::cout << "значение " << i << ": ";
		std::cin >> maks[i];
	}
	system("pause");
	for (int i = 0; i < size; i++)
	{
		std::cout << maks[i] << " ";
	}
	int min = maks[0], max = maks[0];
	int sum = 0;
	for (int i = 0; i < size; i++)
	{
		if (maks[i] > max)
		{
			max = maks[i];
		}
		if (maks[i] < min)
		{
			min = maks[i];
		}
		if (maks[i] > 0)
		{
			sum += maks[i];
		}
		if (maks[i] < 0)
		{
			maks[i] = 791;
		}
	}
	std::cout << max << " " << min << " " << sum;

	delete[] maks;
	return 0;
}