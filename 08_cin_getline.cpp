#include<iostream>
using namespace std;
int main()
{
	char str[10];
	cout<<"Enter a string: ";
	cin.getline(str, 10);
	/* getline() can accept less data then size
	but it will not exceed the max size limit
	it will store only (size - 1) character and last
	character is '\0' NULL caharacter. */
	cout<<str;
	return(0);
}