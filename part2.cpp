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
		Collection(int n);
		T items[100];
		int size;
		
		bool isEmpty();		//returns true iff there are no objects within the collection
		void makeEmpty();	//removes all objects from the collection
		void insert(T val);		//inserts an object x into the collection
		void remove(T val);		//removes an object x from the collection *as long as it exists
		void removeRandom();	//removes an object at random from the collection
		bool notContained(T val);	//returns true iff an object that is equal to x is not present in the collection


};

template <class T>
Collection<T>::Collection()
{
	size = 0;
}

template <class T>
Collection<T>::Collection(int n)
{
	items[n] = { 0 };
	size = 0;
}

template <class T>
bool Collection<T>::isEmpty()
{
	if (size == 0) 
		{ cout << "The collection is empty" << endl; return true; }
	else 
		{ return false; }
}

template <class T>
void Collection<T>::makeEmpty()
{
	for (int i = 0; i <= size; i++)
	{
		items[i] = 0;
	}
	size = 0;
	cout << "Emptied!" << endl;
	return;
}

template<class T>
void Collection<T>::insert(T val)
{
	items[size] = val; //size should work as the next index
	size++;
	return;
}

template<class T>
void Collection<T>::remove(T val)
{

	int err = 1;
	int i = 0;
	if (size == 0) { cout << "The array is empty" << endl; }
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (items[i] == val)
			{
				items[i] = 0;
				for (i; i <= size;i++)
				{
					items[i] = items[i+1];
				}
				cout << "Item removed successfuly" << endl;
				i = size+1;
				size--;
				err = 0;
			}
			
		}
	}
	if(err){ cout << "Item not found" << endl; }
	return;
}

template<class T>
void Collection<T>::removeRandom()
{
	int remov = rand() % size + 1;
	cout << "Item " << items[remov] << " removed!" << endl;
	items[remov] = 0;
	for (int i = remov; i <= size; i++)
	{
		items[i] = items[i + 1];
	}
	size--;
	
	return;
}

template <class T>
bool Collection<T>::notContained(T val)
{
	int i = 0;
	if (size == 0)
		{
			cout << "Item is not contained!" << endl;
			return true;
		}
	else if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			if (items[i] == val)
			{
				cout << "Item was found in the collection" << endl;
				return false;
				break;
			}
		}
	}
	else
		{ 
			cout << "Item is not contained!" << endl;
			return true;
		}

	
}

