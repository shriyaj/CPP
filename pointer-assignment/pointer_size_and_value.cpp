#include <iostream>

int main()
{
	int *iptr;
	int i = 1;
	iptr = &i;
	char *cptr;
	char c = 'a';
	cptr = &c;
	std::cout << "char : "<<c << " address : " << cptr << "size : "<<sizeof(cptr) << std::endl;
	std::cout << "int : "<< i << " address : " << iptr<< "size : "<<sizeof(iptr)<< std::endl;	
	
	
	*iptr = 2;
	*cptr = 'b';
	std::cout << "char : "<<c << " address : " << cptr << std::endl;
	std::cout << "int : "<< i << " address : " << iptr;	
	
	void *vptr;
	// vptr = iptr;
	// vptr = &i;
	std::cout << "void ptr : "<<""<< " address : " << vptr << "size : "<<sizeof(vptr)<< std::endl;
	return(0);
}
