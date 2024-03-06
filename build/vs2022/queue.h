#pragma once
#include <ostream>
#include <linked_list.h>

//is-a

namespace ssuds
{
	template <class T>
	class Queue : private LinkedList<T>
	{
	public:
		using LinkedList<T>::begin();
		using LinkedList<T>::end();

		//add a new value to the beginning of the list
		void enqueue(const T& new_val)
		{
			this->append(new_val);
		}

		//remove the last item in the current list
		void dequeue()
		{
			this->remove(this->rbegin());
		}

		//return the size of the current list being looked at
		int size()
		{
			this->size();
		}

		//check to see if the current list is empty
		bool empty()
		{
			if (this->size() == 0)
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