#include<iostream>
using namespace std;
int a = 10;
// Global variable 'a'
int main() 
{
    int a = 5;
	//  Local variable 'a' (shadows global one)
    cout<<a;
	// prints 5, uses local one and ignore global.
	// Compiler uses the closest one in scope.
    return(0);
}
