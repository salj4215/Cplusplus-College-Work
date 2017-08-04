#include <iostream>
using namespace std;

void sign(int);

int main()
{
	sign(5);
	return 0;
}

void sign(int n)
{
	if(n > 0)
	{
		cout << "No Parking\n";
		sign(n - 1);	
	}
}
