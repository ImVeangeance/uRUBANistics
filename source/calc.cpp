#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

int main(void)
{
	std::string s1, s2;
	unsigned short int max = 1, min = 0, temp = 0;
	char action;
	std::cout << "Enter .. : ";
	std::cin >> s1;
	std::cin >> action;
	std::cin >> s2;
	std::cout << s1.size() << " " << action << " " << s2.size()  << std::endl;
	if(s1.size() >= s2.size())
	{
		max += s1.size();
		min = s2.size();
	}
	else
	{
		max += s2.size();
		min = s1.size();
	}
	unsigned int Array1[max];
	unsigned int Array2[max];
	unsigned int Array_sum[max];
	for(auto i = 0; i < max; i++)
	{
		Array1[i] = 0;
		Array2[i] = 0;
		Array_sum[i] = 0;
	}
	for(auto i = max - s1.size(); i < max; i++)
	{
		Array1[i] = s1[temp] - 0x30;
		temp++;
	}
	temp = 0;
	for(auto i = max - s2.size(); i < max; i++)
	{
		Array2[i] = s2[temp] - 0x30;
		temp++;
	}
	std::cout << "\n";
	for(auto i = 0; i < max; i++)
		std::cout << Array1[i];
		std::cout << std::endl;
	for(auto i = 0; i < max; i++)
		std::cout << Array2[i];
	std::cout << "\n";
	temp = 0;
	switch(action)
	{
		case('+'):
		{		
			for(auto i = max - 1; i < 0; i--)
			{
				// GDE-TO tut kazus
				Array_sum[i] = Array1[i] + Array2[i];// + temp;
				if(Array_sum[i] > 9)
				{
					Array_sum[i] -= 10;
					Array_sum[i - 1] = 1;
					temp = 1;
				}
				else
					temp = 0;
			}
				for(auto i = 0; i < max; i++)
					std::cout << Array_sum[i] << " ";
				std::cout << std::endl;
		}
		break;
		default:
		{
			//
		}
	}
	return 0;
}