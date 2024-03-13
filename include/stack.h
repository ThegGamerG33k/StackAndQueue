#pragma once
#include <ostream>
#include <linked_list.h>

//has-a

namespace ssuds
{
	template <class T>
	class Stack
	{
	protected:
		LinkedList<T> mList;
	public:
		//returns an iterator back to the beginning of the list
		typename LinkedList<T>::LinkedListIterator begin()
		{
			return mList.begin();
		}

		//tells the iterator if this is hit to stop traversing
		typename LinkedList<T>::LinkedListIterator end()
		{
			return mList.end();
		}

		//void function that adds a value to the beginning of the list
		void push(const T& val)
		{
			mList.prepend(val);
		}

		//void function that removes the first item in the list
		void pop()
		{
			typename LinkedList<T>::LInkedListIterator it = mList.begin();
			T temp = *it;
			mList.remove(mList.begin());
			return temp;
		}

		//return the size of the current list being looked at
		int size()
		{
			return mList.size();
		}

		//check to see if the current list is empty
		bool empty()
		{
			if (mList.size() == 0)
			{
				return true;
			}
			else
			{
				return false;
			}
		}
	};
}