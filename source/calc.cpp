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
	int Array1[max];
	int Array2[max];
	int Array_sum[max];
	std::stringstream ss(s2);
	for(auto i = 0; i < max; i++)
	{
		Array1[i] = 0;
		Array2[i] = 0;
		Array_sum[i] = 0;
	}
	for(auto i = max - s1.size(); i < max; i++)
	{
	
		if(s1[temp] == '1')
			Array1[i] = 1;
		else if(s1[temp] == '2')
			Array1[i] = 2;
		else if(s1[temp] == '3')
			Array1[i] = 3;
		else if(s1[temp] == '4')
			Array1[i] = 4;
		else if(s1[temp] == '5')
			Array1[i] = 5;
		else if(s1[temp] == '6')
			Array1[i] = 6;
		else if(s1[temp] == '7')
			Array1[i] = 7;
		else if(s1[temp] == '8')	
			Array1[i] = 8;
		else if(s1[temp] == '9')
			Array1[i] = 9;
			temp++;
	}
	temp = 0;
	for(auto i = max - s2.size(); i < max; i++)
	{
//		std::string swap = s1[i];
//		Array2[i] = std::stoi(swap);
		Array2[i] = s1[i] - 0x30;
		temp++;
	}
	std::cout << "\n";
	for(auto i = 0; i < max; i++)
		std::cout << Array1[i];
		std::cout << std::endl;
	for(auto i = 0; i < max; i++)
		std::cout << Array2[i];
	std::cout << "\n";
	switch(action)
	{
		case('+'):
		{
//DOBIT' NULYAMI I VSE NICE		
			for(auto i = max; i < 0; i--)
			{
				Array_sum[i] = Array1[i] + Array2[i];
				if(Array_sum[i] > 9)
				{
					Array_sum[i] -= 10;
					Array1[i - 1]++;
				}
			}
				for(auto i = 0; i < max; i++)
					std::cout << Array_sum[i];
				std::cout << std::endl;
		}
		break;
		default:
		{
			//
		}
	}
	//for(auto)
	//std::cout << std::endl;
	//std::cin >> pause;
	return 0;
}