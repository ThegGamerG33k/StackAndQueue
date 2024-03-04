#pragma once
#include <ostream>

//is-a

namespace ssuds
{
	template <class T>
	class queue : private LinkedList<T>
	{
	public:
		using LinkedList<T>::begin();
		using LinkedList<T>::end();
	};
}