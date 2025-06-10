#include<iostream>
using namespace std;

template<typename T>
void swappingByValue(T var1, T var2)
{
	T temp;
	
	temp = var1;
	var1 = var2;
	var2 = temp;
}

template<typename T>
void swappingByReference(T &var1, T &var2)
{
	T temp;
	
	temp = var1;
	var1 = var2;
	var2 = temp;
}

template<typename T>
void swappingByPointers(T *var1, T *var2)
{
	T temp;
	
	temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}

int main()
{
	int n1, n2;
	
	n1 = 5;
	n2 = 10;
	
	cout<<"\n ----Function call by value----";
	cout<<"\n Before swapping"
		<<"\n n1: "<<n1
		<<"\n n2: "<<n2;
		
	swappingByValue(n1, n2);
	
	cout<<"\n After swapping"
		<<"\n n1: "<<n1
		<<"\n n2: "<<n2;
	
	cout<<"\n\n\n ----Function call by reference----";
	cout<<"\n Before swapping"
		<<"\n n1: "<<n1
		<<"\n n2: "<<n2;
		
	swappingByReference(n1, n2);
	
	cout<<"\n After swapping"
		<<"\n n1: "<<n1
		<<"\n n2: "<<n2;
	
	cout<<"\n\n\n ----Function call by pointers----";
	cout<<"\n Before swapping"
		<<"\n n1: "<<n1
		<<"\n n2: "<<n2;
		
	swappingByPointers(&n1, &n2);
	
	cout<<"\n After swapping"
		<<"\n n1: "<<n1
		<<"\n n2: "<<n2;
	
	
	return (0);
}
