#include <iostream>

int add(int num1, int num2);

int main()
{
	int n1{0};
	int n2{0};

	std::cout << "Enter first integer : ";
	std::cin >>  n1;
	std::cout << "Enter second integer : ";
	std::cin >> n2;

	std::cout << "Sum is : " << add(n1,n2);

	return(0);
}
