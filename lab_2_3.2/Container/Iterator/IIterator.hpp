//
// Created by Кирилл Титов on 24.05.2020.
//

<<<<<<< HEAD
#ifndef LAB_2_3_2_I_ITERATOR_HPP
#define LAB_2_3_2_I_ITERATOR_HPP

template<typename T>
class IIterator {
=======
#ifndef LAB_2_3_2_ISETITERATOR_HPP
#define LAB_2_3_2_ISETITERATOR_HPP

template<typename T>
class ISetIterator {
>>>>>>> master
public:
	virtual void first()	= 0;
	virtual void next()		= 0;
	virtual void last()		= 0;
	virtual void inRange()	= 0;

protected:
	T current;
};

<<<<<<< HEAD
#endif //LAB_2_3_2_I_ITERATOR_HPP
=======
#endif //LAB_2_3_2_IITERATOR_HPP
>>>>>>> master
