//part2.cpp

#include <iostream>
using namespace std;

/*Design a class template, Collection, that stores a collection of Objects in an array, along with the current size of the collection.
Submit your code:
Use the repository that you cloned for part one
Create a branch called "part2"  (look at the git pdf for a refresher on creating a branch)
Create/Edit/Add your code to the repository (any .cc/cpp/h files)
Commit and Push
*/

template <class T>
class Collection 
{
	public:
		Collection();
		T items[];
		int size;
		
		bool isEmpty();		//returns true iff there are no objects within the collection
		void makeEmpty();	//removes all objects from the collection
		void insert(T&);		//inserts an object x into the collection
		void remove(T&);		//removes an object x from the collection *as long as it exists
		void removeRandom();	//removes an object at random from the collection
		bool notContained(T&);	//returns true iff an object that is equal to x is not present in the collection


};

template <class T>
Collection<T>::Collection()
{
	items[] = { 0 };
	size = 0;
}

template <class T>
bool Collection<T>::isEmpty()
{
	if (size == 0;) { return true; }
	else { return false; }
}

template <class T>
void Collection<T>::makeEmpty()
{
	for (int i = 0; i <= size; i++)
	{
		items[i] = 0;
	}
	size = 0;
	return;
}

template<class T>
void Collection<T>::insert(T&)
{
	items[size] = T&; //size should work as the next index
	size++;
	return;
}

template<class T>
void Collection<T>::remove(T&)
{
	int i = 0;
	if (size == 0) { cout << "The array is empty" << endl; }
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (items[i] == T;)
			{
				items[i] = 0;
				items[i] = *items[i++];
				cout << "Item removed successfuly" << endl;
				i = size;
				size--;
			}
		}
	}
	else if (size != i) { cout << "Item not found" << endl; }
	return;
}

template<class T>
void Collection<T>::removeRandom()
{
	int seed = 123;
	seed = seed / size + 1;
	while (seed>=size)
	{
		seed = seed%size;

	}
	items[seed] = 0;
	items[seed] = *items[seed + 1];
	return;
}

template <class T>
bool Collection<T>::notContained(T&)
{
	int i = 0;
	if (size == 0) { return true; }
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (items[i] == T;)
			{
				return false;
				break;
			}
		}
	else { return true; }

	}
}

