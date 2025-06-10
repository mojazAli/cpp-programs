// Explains for-each loop

// Watch this video(My sir g)
// https://www.youtube.com/shorts/5oDdzsFTjkE?feature=share
#include<iostream>
using namespace std;

int main()
{
	int a[] = { 101, 102, 103 };
	// for-each loop
	for(int val : a)
	{
		cout<<"\n"<<val;
	}
	
	/*
	for-each loop goes through each int value (called val) in the "a"
	(which is likely a vector or array). 
	
	Loop will be executed "N" number of time where "N" is number of elements 
	in "a"(array). */
	return (0);
}

