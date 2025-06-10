#include<iostream>
using namespace std;

int main()
{
	int * numPtr = new int;
	
	cout<<numPtr<<"\t";
	delete numPtr;
	
	// Good programming practice.
	/* numPtr = NULL; */
	
	cout<<numPtr;
	
	/* As you can see by runing the program that "numPtr" still contains
	the memory address which now deos not belong to the program memory area.
	
	So "numPtr" contains invalid memory address because memory has been 
	de-allocated.
	
	As a good programmer you should assign NULL to every pointer after memory
	de-allocation. */
	return (0);
}

