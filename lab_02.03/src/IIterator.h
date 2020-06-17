//
// Created by Кирилл Титов on 24.05.2020.
//

#ifndef LAB_2_3_2_I_ITERATOR_HPP
#define LAB_2_3_2_I_ITERATOR_HPP

#include <iterator>

template<typename T>
class IIterator {

public:
//	virtual SetIterator<T> &next()		= 0;
	virtual SetIterator<T> &inRange()	= 0;

protected:
	T current;
};

#endif //LAB_2_3_2_IITERATOR_HPP
