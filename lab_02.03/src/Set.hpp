//
//  Set.cpp
//  lab_2_3
//
//  Created by Кирилл Титов on 23.05.2020.
//  Copyright © 2020 Кирилл Титов. All rights reserved.
//

#include "Set.h"
#include "SetItem.hpp"

template<typename T>
Set<T>::Set() {
	
	size_t size = 0;
	allocMemory(size);

	std::cout << "Конструктор по умолчанию класса Set\n" ;
}

template<typename T>
template<typename T_>
Set<T>::Set(T_ elem, size_t count) {
	allocMemory(count);
	*(ptr.get()+0) = SetItem<T>(0);
//	*(ptr.get()+1) = 1;
//	*(ptr.get()+2) = 2;
}

template<typename T>
Set<T>::Set(const Set<T> &set) {
	std::cout << "Конструктор копирования класса Set\n" ;
}

template <typename T>
template<typename Iterator>
Set<T>::Set(Iterator first, Iterator last) {
	
}

template<typename T>
template<typename T_>
Set<T>::Set(std::initializer_list<std::initializer_list<T_>>) {
	std::cout << "Конструктор со списком инициализации класса Set\n" ;
}

template<typename T>
Set<T>::~Set() {
	std::cout << "Деструктор класса Set\n";
//	for (SetIterator<T> *item = ptr.first(); ;) {
//		
//	}
//	this->ptr
}

// Methods
template<typename T>
void Set<T>::clear() {
	this->ptr.reset();
}

template<typename T>
bool Set<T>::isEmpty() {
	
}

template<typename T>
size_t Set<T>::size() {
	
}

template<typename T>
SetIterator<T> Set<T>::first() {
	
}

template<typename T>
SetIterator<T> Set<T>::last() {
	
}

template<typename T>
void Set<T>::allocMemory(size_t size) {
	
	if (size < 0) {
		throw MemError();
	}
	
	std::shared_ptr<SetItem<T>> _ptr(new SetItem<T>[size], std::default_delete<SetItem<T>[]>());
	
	if (!_ptr) {
		throw MemError();
	}
	
	this->ptr = _ptr; // это буфер, что бы не испортить указатель, если он уже имелся
	return;
}


//MARK:- Methods
template<typename T>
Set<T> &Set<T>::append() {
	
}

template<typename T>
Set<T> &Set<T>::addSet() {
	
}
