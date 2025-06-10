#include<iostream>
using namespace std;
int main()
{
	char title[20];

	cout<<"enter your book title: ";
	cin.getline(title, 20, '\n');
	/* for C style strings (char arrays)
	 cin.getline(destinationAddress, size, delimiter);

	 In the following version of function, delimiter is getting 
	 default value '\n'.
	 cin.getline(destinationAddress, size);	*/
	cout<<title;
	
	return(0);
}