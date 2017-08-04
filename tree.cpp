//Tree class
class Tree
{
	private:
		static int objectCount;
	public:
		Tree()
		{
			objectCount++;
		}
		int getObjectCount() const
		{
			return objectCount;
		}
};

int Tree::objectCount = 0;

#include <iostream>

using namespace std;

int main()
{
	Tree oak;
	Tree elm;
	Tree pine;
	
	cout << "We have " << pine.getObjectCount() << " trees in our program!";
	return 0;
}
