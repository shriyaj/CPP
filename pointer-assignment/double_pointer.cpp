#include <iostream>

int main()
{
	int num{0};
	int *pnum;
	int **ppnum;
	
	std:: cout << "Enter a number : ";
	std::cin >> num;
	pnum = &num;
	ppnum = &pnum;
	
	*pnum = 2*num;
	std::cout << "Doubled pointer target : " << *pnum << std::endl;
	
	**ppnum = 3*num;
	std::cout << "Tripled pointer target : " << **ppnum;
	
	return(0);
}