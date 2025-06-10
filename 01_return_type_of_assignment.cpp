#include<iostream>
using namespace std;

int main()
{
	int x = 5;

	/* Assignment operator returns the reference to the left hand
	operand. Because it's a refrance so we can assign value
    to it.	*/
	(x = 5) = 3;
	cout<<x;
	
	return(0);
}
