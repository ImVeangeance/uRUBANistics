#include <iostream>
#include <cmath>
#include <string>

int main(void)
{
	/* Variable  */
	unsigned long long int num_size1, num_size2;
	std::string s1, s2;
	int pause;
	short int max = 0, min = 0;
	char action;
	/* Inputing  */
	std::cout << "Enter the first number: ";
	std::cin >> s1;
	std::cout << "\nEnter the second number: ";
	std::cin >> s2;
	std::cout << "\n(+ - * / )\nEnter the operation for action: ";
	//std::cin >> action;
	/*          */
	std::cout << "\nSize of first number - "  << s1
			  << "\nSize of second number - " << s2 << std::endl;
	/* Array creating */
	short int Array1[s1.size()];
	short int Array2[s2.size()];
	for(auto i = 0; i < s1.size(); i++)
		Array1[i] = s1[i] - 0x30;
	for(auto i = 0; i < s2.size() ; i++)
		Array2[i] = s2[i] - 0x30;
	/* 		          */
	std::cout << std::endl;
	/* difining */
	if(s1.size() >= s2.size())
	{
		max = s1.size();
		min = s2.size();
	}
	else
	{
		max = s2.size();
		min = s1.size();
	}
	short int Array_sum[max];
	/*          */
//	switch(action)
//	{
//		case('+'):
//		{

//DOBIT' NULYAMI I VSE NICE	

/*	
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
	//std::cin >> pause; 
	return 0;
}