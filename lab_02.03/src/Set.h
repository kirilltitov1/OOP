
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
	std::shared_ptr<SetItem<T>> ptr {nullptr};
	
	void allocMemory(size_t size);

protected:
	size_t size;
	
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
	
	Set<T> &operator-=(const T &elem);
	Set<T> operator-(const T &elem) const;
	Set<T> &remove(const T &elem) const;
	
	Set<T> operator+(const T &elem) const;
	Set<T> &add(const T &elem) const;
	Set<T> &operator+=(const T &elem);
	Set<T> &append(const T elem);
	Set<T> &operator+=(const Set<T> &setToAdd);
	Set<T> &addSet(const Set<T> &SetToAdd);
	
	Set<T> &operator=(const Set<T> &set);
	Set<T> &operator=(const Set<T> &&set) noexcept;
	
	template<typename T_>
	bool isUnique(SetItem<T_>);
	
	ConstSetIterator<T> begin() const;
	ConstSetIterator<T> end() const;
};

#endif /* Container_hpp */
