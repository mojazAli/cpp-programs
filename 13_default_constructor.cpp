#include<iostream>
using namespace std;
class node
{
private:
	int item;
	node * next;

public:
	// methods for setting and getting data members value.
	void setItem(int aItem)
	{ item = aItem; }
	int getItem()
	{ return (item); }
	void setNext(node * aNext)
	{ next = aNext; }
	node * getNext()
	{ return (next); }
};
int main()
{
	node * newNode = new node();
	// default constructor will be called in both cases.
	// node * newNode = new node;
	// node * newNode = new node();
	newNode->setItem(4);
	cout<<newNode->getItem();
	return (0);
}