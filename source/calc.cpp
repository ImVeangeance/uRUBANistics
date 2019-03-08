#include <iostream>
#include <cmath>
#include <string>
#include <sstream>

int main(void)
{
	std::string s1 = "4228", s2 = "5162";
	int max = 1, min = 0, temp = 0;
	char action = '+';
	std::cout << "Enter .. : ";
	std::cin >> s1;
	std::cin >> action;
	std::cin >> s2;
//	std::cout << s1.size() << " " << action << " " << s2.size()  << std::endl;
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
	char Array1[max];
	char Array2[max];
	for(auto i = 0; i < max; i++)
	{
		Array1[i] = 0;
		Array2[i] = 0;
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
	std::cout << "\n\t";
	for(auto i = max - s1.size(); i < max; i++)
		std::cout << static_cast<int>(Array1[i]);
		std::cout << "\n   " << action << "\n\t";
	for(auto i = max - s2.size(); i < max; i++)
		std::cout << static_cast<int>(Array2[i]);
	std::cout << "\n\t";
	for(auto i = 0; i < max; i++)
		std::cout << "-";
	std::cout << "\n\t";
	temp = max - 1;
	switch(action)
	{
		case('+'):
		{	
			for (auto i = 0; i < max; i++)
				{
				    Array2[i] += Array1[i];
				    if(Array2[i] > 9)
				    {
				    	Array2[i] -= 10;
				 		Array2[i - 1] += 1;   	
				    }
				}
		}
		break;
		case('-'):
		{
			//
		}
		break;
		case('*'):
		{
			temp = 0;
			for (auto i = 0; i < max; i++)
			{
			    Array2[i] *= Array1[i];
		    	if(Array2[i] > 9)
		    	{
					Array2[i - 1] += Array2[i] % 10;
					Array2[i] = Array2[i] / 10;   	
			    }
			}
		}
		break;
		case('/'):
		{
			//
		}
		break;
		default:
		{
			std::cout << "\tWrong operator!\n";
//			exit();
		}
	}
	int i = 0;
//	if(Array2[0] == 0)
//		i = 1;
	for(i; i < max; i++)	
		std::cout << static_cast<int>(Array2[i]);
	std::cout << std::endl;
	return 0;
}