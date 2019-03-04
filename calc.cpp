#include <iostream>
#include <cmath>
#include <string>

int main(void)
{
	/* Variable  */
	unsigned long long int num_size1, num_size2;
	std::string s1, s2;
	int pause;
	char action;
	/* Inputing  */
	std::cout << "Enter the first number: ";
	std::cin >> s1;
	std::cout << "\nEnter the second number: ";
	std::cin >> s2;
	std::cout << "\n(+ - * / )\nEnter the operation for action: ";
	std::cin >> action;
	/*          */
	std::cout << "\nSize of first number - "  << s1
			  << "\nSize of second number - " << s2 << std::endl;
	/* Array creating */
	short int Array1[s1.size()];
	short int Array2[s2.size()];
	for(auto i = 0; i < s1.size(); i++)
		Array1[i] = s1[i] - 0x30;
	for(auto i = 0; i < s2.size() ; i++)
		Array2[i] = s2.at(i);
	/* 		          */
	std::cout << std::endl;
	switch(action)
	{
		case('+'):
		{
			//
			break;
		}
		default:
		{
			//
		}
	}
	//for(auto)
	//std::cin >> pause; 
	return 0;
}