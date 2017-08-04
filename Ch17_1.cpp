#include <iostream>
#include "IntNumberList.h"

using namespace std;

int main()
{
	IntNumberList list;
	
	list.appendNode(2);
	list.appendNode(4);
	list.appendNode(6);
	
	list.insertNode(8);
	list.insertNode(10);
	
	cout << "Here are the initial values:\n";
	list.displayList();
	cout << endl;
	
	cout << "Now deleting the first value with pop_front.\n";
	list.pop_front();
	
	cout << "Now deleting the last value with pop_back.\n";
	list.pop_back();
	
	cout << "Now pushing 999 to front with push_front\n";
	list.push_front(999);
	
	cout << "Now pushing 777 to end with push_back\n";
	list.push_back(777);
	
	cout << "Here is the new list.\n";
	list.displayList();
	
	return 0;
	
}
