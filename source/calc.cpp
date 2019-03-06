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
	unsigned short int Array1[max];
	unsigned short int Array2[max];
	unsigned short int Array_sum[max];
	std::stringstream ss(s2);
//	for(auto i = 0; i < max; i++)
//	{
//		Array1[i] = 0;
//		Array2[i] = 0;
//	}
	for(auto i = max - s1.size(); i < max;)
	{
		if(s1[i] == '1')
			Array1[i] = 1;
		else if(s1[i] == '2')
			Array1[i] = 2;
		else if(s1[i] == '3')
			Array1[i] = 3;
		i++;
	}
//	ss[s2.size()] >> Array2[max];
//	Array1[i] = s1[i] - 0x30;
//	for(auto i = max; i < max - s2.size(); i--)
//		Array2[i] = s1[i] - 48;
//	for(auto i = max - s2.size(); i < 0; i--)
//		Array2[i] = '0' - 48;
	for(auto i = 0; i < max; i++)
		std::cout << Array1[i];
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