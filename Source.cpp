#include <iostream>
#include <vector>
#include <random>

int main()
{ // Угадывает пользователь
	while (true)
	{
		std::vector<int> vec(4);
		int n;
		std::cout << "Input a number: ";
		std::cin >> n;
		int k = 0, f = 0;
		srand(n);
		while (k < 4)
		{
			vec[k] = rand() % 10;
			for (auto j = 0; j < k; j++)
			{
				if (vec[k] == vec[j])
				{
					f = 1;
					break;
				}
			}
			if (f == 0)
			{
				k++;
			}
		}
		for (auto i = 0; i < vec.size(); ++i)
		{
			std::cout << vec[i] << " ";
		}
		std::cout << std::endl;
		std::vector<int> vec2(4);
		int bull = 0, cow = 0;
		while (bull != 4)
		{
			bull = cow = 0;
			std::cout << "Input four numbers: " << std::endl;
			for (auto i = 0; i < vec2.size(); ++i)
			{
				std::cin >> vec2[i];
			}

			for (auto i = 0; i < vec.size(); ++i)
			{
				for (auto j = 0; j < vec2.size(); ++j)
				{
					if (vec[i] == vec2[j])
					{
						if (i == j)
						{
							bull++;
						}
						else
						{
							cow++;
						}
					}
				}
			}
			std::cout << bull << " " << cow << std::endl;
		}
	}
	return 0;
}

int main1()
{ // Угадывает компьютер
	std::vector<int> vec3;
	int buf = 0;
	int bulls = 0, cows = 0;
	for (int i = 0; i < 10; ++i)
	{
		std::cout << i << " " << i << " " << i << " " << i << " " << std::endl;
		std::cin >> bulls >> cows;
		if (bulls)
		{
			vec3.push_back(i);
		}
		else
		{
			buf = i;
		}
		if (vec3.size() == 4)
		{

			break;
		}
	}
	std::vector<int> vec_r(4);
	std::vector<int> vec_buf(4);
	for (int j = 0; j < 4; ++j)
	{
		for (int i = 0; i < 4; ++i)
		{
			vec_buf.assign(4, buf);
			vec_buf[i] = vec3[j];
			for (int k = 0; k < 4; ++k)
			{
				std::cout << vec_buf[k];
			}
			std::cout << std::endl;
			std::cin >> bulls >> cows;
			if (bulls)
			{
				vec_r[i] = vec3[j];
				break;
			}
		}
	}
	for (int i = 0; i < 4; ++i)
	{
		std::cout << vec_r[i];
	}
	std::cout << std::endl;
	std::cin >> bulls >> cows;
	return 0;
}