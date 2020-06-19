//
// Created by Кирилл Титов on 24.05.2020.
//

#ifndef LAB_2_3_2_SETITERATOR_HPP
#define LAB_2_3_2_SETITERATOR_HPP

#include <cstddef>
#include <iostream>
#include <memory>

#include "IIterator.h"
//#include "SetItem.h"


template<typename T> class Set;


template<typename T>
class SetIteratorBase: public IIterator<T>, public std::iterator<std::input_iterator_tag, T> {
private:
	std::shared_ptr<SetItem<T>> curPtr;
	
public:
	SetIteratorBase();
    SetIteratorBase(const SetIteratorBase<T> &setIterator);
    SetIteratorBase(const std::shared_ptr<SetItem<T>> itemb);

    virtual ~SetIteratorBase() = default;

    SetIteratorBase<T> &operator=(const SetIteratorBase<T> &listIter);
    SetIteratorBase<T> &operator++();
    SetIteratorBase<T> operator++(int);

    bool operator==(const SetIteratorBase<T> &setIterator) const;
    bool operator!=(const SetIteratorBase<T> &setIterator) const;

	bool checkRange() const;
	SetIteratorBase<T> &next();
};

template<typename T>
class SetIterator: public SetIteratorBase<T> {

public:
	SetIterator();
	SetIterator(const SetIterator<T> &setIterator);
	SetIterator(const std::shared_ptr<SetItem<T>> item);

	SetIterator<T> &operator=(const SetIterator<T> &setIterator);

	T &getCur();
	T &getNext();
	const T &getCur() const;
	const T &getNext() const;

	T &operator*();
	T *operator->();
	const T &operator*() const;
	const T *operator->() const;

	operator bool() const;
};

template<typename T>
class ConstSetIterator: public SetIteratorBase<T> {
	
	
public:
	ConstSetIterator();
	ConstSetIterator(const ConstSetIterator<T> &setItem);
	ConstSetIterator(std::shared_ptr<SetItem<T>> item);

	ConstSetIterator<T> &operator=(const ConstSetIterator<T> &setItem);

	const T &getCur() const;
	const T &getNext() const;

	const T &operator*() const;
	const T *operator->() const;

	operator bool() const;
};

#endif //LAB_2_3_2_SETITERATOR_HPP
