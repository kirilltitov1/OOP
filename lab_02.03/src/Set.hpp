//
//  Set.cpp
//  lab_2_3
//
//  Created by Кирилл Титов on 23.05.2020.
//  Copyright © 2020 Кирилл Титов. All rights reserved.
//

#include "Set.h"
#include "SetItem.hpp"

//MARK:- Constructors
template<typename T>
Set<T>::Set(): size(0) {
	std::cout << "Конструктор по умолчанию класса Set\n" ;
}

template<typename T>
Set<T>::Set(const T* notUnicueArray, size_t count) {
	allocMemory(count);
	for (const auto *item = notUnicueArray; item < notUnicueArray + count; item++) {
		this->append(*item);
	}
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

//MARK:- Destructor
template<typename T>
Set<T>::~Set() {
	std::cout << "Деструктор класса Set\n";
}

//MARK:- Methods
template<typename T>
void Set<T>::clear() {
	this->ptr.reset();
}

template<typename T>
bool Set<T>::isEmpty() {
	return (ptr.use_count() == 0) ? true : false;
}

template<typename T>
size_t Set<T>::getSize() {
	return ptr.use_count();
}

template<typename T>
SetIterator<T> Set<T>::begin() {
	return SetIterator<T>(0);
}

template<typename T>
SetIterator<T> Set<T>::end() {
	return SetIterator<T>(getSize());
}

template<typename T>
SetIterator<T> Set<T>::c_begin() {
	
}

template<typename T>
SetIterator<T> Set<T>::c_end() {
	
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
Set<T> &Set<T>::operator+=(const T &data) {
	
}

template<typename T>
Set<T> &Set<T>::append(const T data) {
	size_t size = this->ptr.use_count();
	std::shared_ptr<SetItem<T>> newPtr(new SetItem<T>[ptr.use_count()+1], std::default_delete<SetItem<T>[]>());
	for (int i = 0; i < ptr.use_count(); i++) {
		newPtr.get()[i] = ptr.get()[i];
	}
	newPtr.get()[size-1] = SetItem<T>(data);
	this->ptr = newPtr;
	return *this;
}

template<typename T>
Set<T> &Set<T>::add(const T &data) {
	Set<T> newSet(*this);
    newSet.append(data);
    return newSet;
}

template<typename T>
Set<T> &Set<T>::addSet(const Set &SetToAdd) {
	
}

template<typename T>
Set<T> &Set<T>::remove(const T &data) const {
	
}

template<typename T>
Set<T> Set<T>::initSet(T &data) {
	return Set<T>();
}

template<typename T>
Set<T> Set<T>::operator+(const T &data) const {
	return Set<T>();
}

template<typename T>
Set<T> Set<T>::operator-(const T &data) const {
	return Set<T>();
}

template<typename T>
template<typename T_>
Set<T>::Set(const Set<T> &&set) noexcept {

}

template<typename T>
template<typename T_>
bool Set<T>::isUnique(SetItem<T_>) {
	
}
