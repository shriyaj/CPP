#include <iostream>
int takeInput()
{
	int num{0};
	std::cout << "Enter an integer : ";
	std::cin >> num;
	return(num);
}

int doubleNumber(int num)
{
	return(2*num);
}

void printDouble(int num2)
{
	std::cout << "Doubled number is : " << num2;
}
int main()
{
	printDouble(doubleNumber(takeInput()));
	return 0;
}

