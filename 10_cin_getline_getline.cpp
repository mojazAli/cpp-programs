#include<iostream>
using namespace std;
int main()
{
	int id;
	char name[20];
	char program[10];
	cout<<"Enter your id, name and program: ";
	cin>>id;
	cin.ignore();
	cin.getline(name, 20);
	cin.getline(program, 10);
	/* Yes, calling getline after another getline works fine.
	No extra cin.ignore() needed between them. 
	
	Because getline() reads and removes the newline (\n)
	from the input buffer. So no cin.ignore() is needed. */
	cout<<"\n\nId: "<<id
		<<"\nName: "<<name
		<<"\nProgram: "<<program;
	return(0);
}