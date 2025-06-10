#include<iostream>
using namespace std;
int main()
{
	int n1 = 0, n2 = 0;
	char str[20];
	cout<<"Enter a number, string and again a number: ";
	cin>>n1;
	/* Always make sure whenever you are using cin.getline()
	after cin, must use cin.ignore() between cin and cin.getline().
	
	No extra header file is required to use these functions.*/
	cin.ignore();
	cin.getline(str, 20);
	cin>>n2;
	cout<<n1<<"\n"
		<<str<<"\n"
		<<n2;
	return(0);
}