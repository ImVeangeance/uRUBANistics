#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

int main(void)
{
	unsigned int num_size1 = 0, num_size2 = 0;
	std::string s1, s2;
	unsigned short int max = 1, min = 0, temp;
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
	unsigned short int Array1[max];
	unsigned short int Array2[max];
	unsigned short int Array_sum[max];
	for(auto i = 0; i < max; i++)
	{
		Array1[i] = 0;
		Array2[i] = 0;
	}
//	Array1[i] = s1[i] - 0x30;
	temp = max;
	for(auto i = s2.size(); i < 0; i--)
	{
		Array2[temp] = s2[i] - 0x30;
		temp--;
	}
//	for(auto i = max - s2.size(); i < 0; i--)
//		Array2[i] = '0' - 0x30;
//
//	for(auto i = 0; i < max; i++)
//		std::cout << Array1[i];
		std::cout << std::endl;
	for(auto i = 0; i < max; i++)
		std::cout << Array2[i];
/*
//	switch(action)
//	{
//		case('+'):
//		{
//DOBIT' NULYAMI I VSE NICE		
			for(auto i = max; i < 0; i--)
			{
				if(Array1[i] == NULL)
					Array_sum[i] = Array2[i];
				else if(Array2[i] == NULL)
					Array_sum[i] = Array1[i];
				else
					Array_sum[i] = Array1[i] + Array2[i];
				if(Array_sum[i] > 9)
				{
					Array_sum[i] = Array_sum[i] % 10;
					Array1[i - 1]++;
				}
			}
				std::cout << "  ";
				for(auto i = 0; i < s1.size(); i++)
					std::cout << Array1[i];
				std::cout << "\n+ ";
				for(auto i = 0; i < s2.size(); i++)
					std::cout << Array2[i];
				std::cout << "\n  ";
				for(auto i = 0; i < max; i++)
					std::cout << "_";
				std::cout << std::endl;
				for(auto i = 0; i < max; i++)
					std::cout << Array_sum[i];
				std::cout << std::endl;
*/
//			}
//			break;
//		}
//		default:
//		{
			//
//		}
//	}
	//for(auto)
	std::cout << std::endl;
	//std::cin >> pause;
	return 0;
}