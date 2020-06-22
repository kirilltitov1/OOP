
//
//  Set.hpp
//  lab_2_3
//
//  Created by Кирилл Титов on 23.05.2020.
//  Copyright © 2020 Кирилл Титов. All rights reserved.
//

#ifndef Container_hpp
#define Container_hpp

#include <cstddef>
#include <iostream>
#include <memory>
#include <ctime>

#include "IContainer.h"
#include "SetItem.h"
#include "SetIterator.h"
#include "errors.h"

template<typename T> class SetIterator;

template <typename T>
class Set: public IContainer {

public:
//MARK:- Constructors
	Set();									// конструктор по умолчанию

	//	Set(size );
	Set(const T *notUnicueArray, size_t count);	// конструктор с переменными
	
//	template<typename T_>
//	Set(std::shared_ptr<SetItem<T_>> &newPtr);

	explicit Set(const Set<T> &set);					// конструктор копирования
	
	Set(Set<T> &&set) noexcept;		// конструктор перемещения
	
	template<typename Iterator>
	Set(Iterator begin, Iterator end);
	
	Set(std::initializer_list<T> );	// конструктор со списком инициализации

//MARK:- Destructor
	virtual ~Set() ;

	
//MARK:- Methods
	void inline clear();
	bool inline isEmpty();
	size_t getSize();
//	Set<T> initSet(T &elem);
	
//	Set<T> &operator-=(const T &elem);
//	Set<T> operator-(const T &elem) const;

	Set<T> &remove(const T &elem) const;
	
	Set<T> &add(const T &elem) const;
	Set<T> &addSet(const Set<T> &SetToAdd);
	
	Set<T> &operator=(const Set<T> &set);
	Set<T> &operator=(Set<T> &&set);
	
	// пересечение++
	Set<T>& intersect(const Set<T>& set);
    Set<T>& operator *=(const Set<T>& set);
    Set<T> operator *(const Set<T>& set) const;
    Set<T>& operator &=(const Set<T>& set);
    Set<T> operator &(const Set<T>& set) const;
	
	// обьединение++
	Set<T>& unite(const Set<T>& set);
    Set<T>& operator +=(const Set<T>& set);
    Set<T> operator +(const Set<T>& set) const;
    Set<T>& operator +=(const T& elem);
    Set<T> operator +(const T& elem) const;
	
	// разность++
	Set<T>& difference(const Set<T>& set);
    Set<T>& operator -=(const Set<T>& set);
    Set<T> operator -(const Set<T>& set) const;
    Set<T>& operator -=(const T& elem);
    Set<T> operator -(const T& elem) const;
	
	// сравнение множеств++
	bool operator <=(const Set<T>& set) const;
	bool isSubset(const Set<T>& set) const;
	
	bool operator <(const Set<T>& set) const;
	bool isStrictSubset(const Set<T>& set) const;

	bool operator >=(const Set<T>& set) const;
	bool isSuperset(const Set<T>& set) const;

	bool operator >(const Set<T>& set) const;
	bool isStrictSuperset(const Set<T>& set) const;
	
	// симметр разность++
	Set<T>& symmetricDifference(const Set<T>& _set);
    Set<T> operator ^(const Set<T>& _other) const;
    Set<T>& operator ^=(const Set<T>& _set);
	
	bool isUnique(T &elem);
	
	// вывод++
	friend std::ostream& operator <<(std::ostream& os, const Set<T>& set); //
	
	ConstSetIterator<T> begin() const;
	ConstSetIterator<T> end() const;
private:
		std::shared_ptr<SetItem<T>> ptr {nullptr};
		void allocMemory(size_t size);
		Set<T> &append(const T elem);

protected:
		size_t size;
};

#endif /* Container_hpp */
