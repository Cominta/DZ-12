#include <iostream>
#include <vector>

int main()
{
	// 1
	// int num;

	// std::cout << "Enter num: ";
	// std::cin >> num;

	// for (int i = 1; i <= num; i++)
	// {
	// 	if (num % i == 0)
	// 	{
	// 		std::cout << i << "\n";
	// 	}
	// }

	// 2
	// int num;

	// std::cout << "Enter num: ";
	// std::cin >> num;

	// for (int i = 2; i < num; i++)
	// {
	// 	if (num % i == 0)
	// 	{
	// 		std::cout << "Ne prostoe" << "\n";
	// 		exit(0);
	// 	}
	// }

	// std::cout << "Prostoe";

	// 3
	// std::string num;

	// std::cout << "Enter num: ";
	// std::cin >> num;

	// for (int i = 0; i < num.size() - 1; i++)
	// {
	// 	if (num[i] == num[i + 1])
	// 	{
	// 		std::cout << "There is same numbers";
	// 		exit(0);
	// 	}
	// }

	// std::cout << "There isnt same numbers";

	// return 0;

	// 4
	std::string num;

	std::cout << "Enter number: ";
	std::cin >> num;

	for (int i = 0; i < num.size() - 1; i++)
	{
		if (num[i] < num[i + 1])
		{
			std::cout << "V ybivaushim";
			exit(0);
		}
	}

	std::cout << "V neybivaushim";

	// 5
	// std::vector<int> numbers;

	// for (int i = 0; i < 1000; i++)
	// {
	// 	numbers.push_back(i + 1);
	// }

	// int left = 0;
	// int right = numbers.size() - 1;

	// while (true)
	// {
	// 	int midNum = numbers[(left + right) / 2];

	// 	int op;

	// 	std::cout << "Is " << midNum << " correct number? (1 - yes, 2 - no) ";
	// 	std::cin >> op;

	// 	if (op == 1)
	// 	{	
	// 		std::cout << "HAHA, i win this";
	// 		break;
	// 	} 

	// 	else if (op == 2)
	// 	{
	// 		std::cout << "Your number bigger or smaller than this? (1 - bigger, 2 - smaller) ";
	// 		std::cin >> op;

	// 		if (op == 1)
	// 		{
	// 			left = (left + right) / 2;
	// 		}

	// 		else if (op == 2)
	// 		{
	// 			right = (left + right) / 2;
	// 		}
	// 	}
	// }
}