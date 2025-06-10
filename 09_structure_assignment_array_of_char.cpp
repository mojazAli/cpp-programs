#include<iostream>
#include<string.h>
using namespace std;

struct book
{
	int bookId;
	float price;
	char title[20];
};

void display(book);

int main()
{
	book b1, b2;
	
	b1.bookId = 101;
	b1.price = 999.9f;
	strcpy(b1.title, "C++ by Saurabh sir");
	
	b2 = b1; 
	// what about char title[20] is content copied or not?
	strcpy(b2.title, "DSA by saurabh sir");
	/* As you will notice that changing b2.title[20] will not
	affect b1.title[20]. So yes it is copied seprately.
	
	The entire contents of title[20] are copied from b1 to b2. 
	And then b2.title[20] content is changed. */
	display(b1);
	display(b2);
	
	return (0);
}

void display(book b)
{
	cout<<"\n\nBook Id: "<<b.bookId
		<<"\nPrice: "<<b.price
		<<"\nTitle: "<<b.title;
}
