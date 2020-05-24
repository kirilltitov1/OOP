//
// Created by Кирилл Титов on 24.05.2020.
//

#ifndef LAB_2_3_2_ISETITERATOR_HPP
#define LAB_2_3_2_ISETITERATOR_HPP

template<typename T>
class ISetIterator {
public:
	virtual void first()	= 0;
	virtual void next()		= 0;
	virtual void last()		= 0;
	virtual void inRange()	= 0;

protected:
	T current;
};

#endif //LAB_2_3_2_IITERATOR_HPP
