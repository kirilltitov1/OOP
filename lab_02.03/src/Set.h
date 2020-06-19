
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

#include "IContainer.h"
#include "SetItem.h"
#include "SetIterator.h"
#include "errors.h"

template<typename T> class SetIterator;

template <typename T>
class Set: public IContainer {
private:
	std::shared_ptr<SetItem<T> > ptr {nullptr};

protected:
	size_t size;
	
public:
//MARK:- Constructors
	Set();									// конструктор по умолчанию

	//	Set(size );
	Set(const T *notUnicueArray, size_t count);	// конструктор с переменными
	
	Set(std::shared_ptr<SetItem<T>> &newPtr);
	
	Set(const Set<T> &set);					// конструктор копирования
	
	template<typename T_>
	Set(const Set<T> &&set) noexcept;		// конструктор перемещения
	
	template<typename Iterator>
	Set(Iterator begin, Iterator end);
	
	template<typename T_>
	Set(std::initializer_list<std::initializer_list<T_>>);	// конструктор со списком инициализации

//MARK:- Destructor
	virtual ~Set();

	
//MARK:- Methods
	void clear();
	bool isEmpty();
	size_t getSize();
	Set<T> initSet(T &data);
	
	Set<T> operator+(const T &data) const;
	Set<T> &add(const T &data);
	
	Set<T> operator-(const T &data) const;
	Set<T> &remove(const T &data) const;
	
	Set<T> &operator+=(const T &data);
	Set<T> &append(const T data);
	Set<T> &addSet(const Set &SetToAdd);
	
	Set<T> &operator-=(const T &data);
	
	template<typename T_>
	bool isUnique(SetItem<T_>);
	
	SetIterator<T> begin();
	SetIterator<T> end();
	
	SetIterator<T> c_begin();
	SetIterator<T> c_end();
	
	void allocMemory(size_t size);
};

#endif /* Container_hpp */