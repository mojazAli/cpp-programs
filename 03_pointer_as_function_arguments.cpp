#include<iostream>
using namespace std;
/* In the function definition void print(char str[]);
str is just a pointer to the first element of the array,
not the complete array itself.

It's equivalent to writing:
void print(char *str);

Both mean the same thing — a pointer to a char.
The array itself is not copied or recreated; 
only the address is passed. 

This is why changes made to the array inside the 
print() function would affect the original array in main(). */
void print(char []);
int main()
{
	char str[10] = "Hello";
	print(str);
	return(0);
}
void print(char str[])
{
	str[0] = 'b';
	// changes made here. It will be reflacted in main() also.
	cout<<str;
}