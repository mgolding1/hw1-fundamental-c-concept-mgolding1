//collectionDriver.cpp


#include <iostream>
using namespace std;

#include "part2.cpp"

Collection<int> ints;



void populate(int thisarray[])
{
	for (int i = 0; i < 10; i++)
	{
		ints.items[i] = thisarray[i];
		ints.size++;
	}
}

void printItems()
{

	for (int i = 0; i < ints.size; i++)
	{
		cout << ints.items[i] << "  ";
	}
	cout << endl << endl;
}

int main()
{
	int myarray[10] = { 1,2,3,4,5,6,7,8,9,10 };
	populate(myarray);
	printItems();

	ints.insert(99);
	ints.insert(88);
	ints.insert(77);
	printItems();

	ints.remove(98);
	ints.remove(99);
	printItems();

	ints.removeRandom();
	ints.removeRandom();
	printItems();

	ints.notContained(8);
	ints.notContained(111);
	cout << endl;

	ints.isEmpty();
	ints.makeEmpty();
	ints.isEmpty();
	
	return 1;
}

