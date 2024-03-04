#pragma once
#include <ostream>

//has-a

namespace ssuds
{
	template <class T>
	class stack
	{
	private:
		LinkedList<T> mList;
	public:
		LinkedListIterator begin()
		{
			return mList.begin();
		}

		LinkedListIterator end()
		{
			return mList.end();
		}
	};
}
