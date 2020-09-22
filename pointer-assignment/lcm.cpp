#include <iostream>

int gcd(int n1, int n2)
{
	if (n1 == 0)
		return(n1);
	
	if (n2 == 0)
		return(n2);
	
	if (n1 == n2)
		return(n1);
	
	if (n1 > n2)
		return(gcd(n1-n2,n2));
	return(gcd(n1,n2-n1));
}
	
int lcm(int *num1, int *num2)
{
	int gcd_val = gcd(*num1,*num2);
	// std::cout << std::endl << "GCD is " << gcd_val << std::endl;
	return((*num1 * *num2)/gcd_val); 
}
int main()
{
	int num1{0},num2{0};
	std::cout << "Enter number 1 : " ;
	std::cin >> num1;
	std::cout << "Enter number 2 : " ;
	std::cin >> num2;
	std::cout << "LCM is "<< lcm(&num1, &num2);
	return(0);
}