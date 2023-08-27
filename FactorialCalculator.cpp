#include <iostream>

unsigned long long calculateFactorial(int n)
{
	if (n < 0)
	{
		std::cerr << "The factorial of negative numbers cannot be calculated." << std::endl;
		return 0;
	}
	if (n == 0 || n == 1) return 1;

	unsigned long long factorial = 1;
	for (int i = 2; i <= n; ++i)
	{
		factorial *= i;
	}
	return factorial;
}

int main()
{
	int num;
	std::cout << "Enter the number for which you want to calculate the factorial: ";
	std::cin >> num;

	unsigned long long result = calculateFactorial(num);
	if (result != 0)
	{
		std::cout << num << "! = " << result << std::endl;
	}
	return 0;
}
