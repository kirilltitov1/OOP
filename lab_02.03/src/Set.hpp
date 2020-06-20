//
//  Set.cpp
//  lab_2_3
//
//  Created by Кирилл Титов on 23.05.2020.
//  Copyright © 2020 Кирилл Титов. All rights reserved.
//

#include "Set.h"
#include "SetItem.h"

//MARK:- Constructors
template<typename T>//+
Set<T>::Set(): size(0) {
	std::cout << "Конструктор по умолчанию класса Set\n" ;
}

template<typename T>//+
Set<T>::Set(const T* notUnicueArray, size_t count) {
	allocMemory(count);
	this->size = 0;
	for (const auto *item = notUnicueArray; item < notUnicueArray + count; item++) {
		this->append(*item);
		this->size++;
	}
}

template<typename T>//+
Set<T>::Set(const Set<T> &set) {
	this->addSet(set);
	std::cout << "Конструктор копирования класса Set\n" ;
}

template <typename T>//+
template<typename Iterator>
Set<T>::Set(Iterator begin, Iterator end) {
	for (auto item = begin; end != item; ++item)
    {
        this->append(item);
    }
}

template<typename T>//+
template<typename T_>
Set<T>::Set(std::initializer_list<std::initializer_list<T_>> array) {
	for (const auto item: array) {
		this->append(item);
	}
	std::cout << "Конструктор со списком инициализации класса Set\n" ;
}

template<typename T>//+
Set<T>::Set(const Set<T> &&set) noexcept {
	this->size = set->size;
	this->ptr.reset(set);
	
	set->size = 0;
	set->ptr = nullptr;
}

//MARK:- Destructor
template<typename T>//+
Set<T>::~Set() {
	std::cout << "Деструктор класса Set\n";
}

//MARK:- Methods
template<typename T>//+
void inline Set<T>::clear() {
	this->ptr.reset();
}

template<typename T>//+
bool inline Set<T>::isEmpty() {
	return (ptr.use_count() == 0) ? true : false;
}

template<typename T>//+
size_t Set<T>::getSize() {
	return this->size;
}

template<typename T>//+
SetIterator<T> Set<T>::begin() {
	return SetIterator<T>(0);
}

template<typename T>//+
SetIterator<T> Set<T>::end() {
	return SetIterator<T>(getSize());
}

template<typename T>//+
ConstSetIterator<T> Set<T>::c_begin() const {
	return SetIterator<T>(0);
}

template<typename T>//+
ConstSetIterator<T> Set<T>::c_end() const {
	return SetIterator<T>(getSize());
}

template<typename T>//+
void Set<T>::allocMemory(size_t size) {
	
	if (size < 0) {
		throw MemError();
	}
	
	std::shared_ptr<SetItem<T>> _ptr(new SetItem<T>[size], std::default_delete<SetItem<T>[]>());
	
	if (!_ptr) {
		throw MemError();
	}
	this->ptr = _ptr;
	return;
}

template<typename T>//+
Set<T> &Set<T>::operator+=(const T &elem) {
	return *this->add(elem);
}

template<typename T>//+
Set<T> &Set<T>::operator+=(const Set<T> &setToAdd) {
	return this->addSet(setToAdd);
}

template<typename T>//+
Set<T> &Set<T>::append(const T elem) {
	std::shared_ptr<SetItem<T>> newPtr(new SetItem<T>[size+1], std::default_delete<SetItem<T>[]>());
	for (int i = 0; i < size; i++) {
		newPtr.get()[i] = ptr.get()[i];
	}
	newPtr.get()[size] = SetItem<T>(elem);
	this->ptr = newPtr;
	return *this;
}

template<typename T>//+
Set<T> &Set<T>::add(const T &elem) const {
	Set<T> newSet(*this);
    newSet.append(elem);
    return newSet;
}

template<typename T>//+
Set<T> Set<T>::operator+(const T &elem) const {
	return *this->add(elem);
}

template<typename T>
Set<T> &Set<T>::addSet(const Set<T> &setToAdd) {
	for (size_t i = 0; i < size; i++) {
		if (isUnique(ptr.get()[i])) {
			append(ptr.get()[i].getData());
		}
	}
	return *this;
}

template<typename T>//+
Set<T> &Set<T>::remove(const T &elem) const {
	bool flag = false;
	size_t pos;
	for (size_t i = 0; i < size; i++) {
		if (this->ptr.get()[i] == elem) {
			flag = true;
			pos = 0;
		}
	}
	size_t size = this->size;
	std::shared_ptr<SetItem<T>> newPtr(new SetItem<T>[size-1], std::default_delete<SetItem<T>[]>());
	for (size_t i = 0; i < size; i++) {
		if (i != pos) {
			newPtr.get()[i] = ptr.get()[i];
		}
	}
	ptr = newPtr;
	return *this;
}

template<typename T>//+
Set<T> Set<T>::operator-(const T &elem) const {
	return *this->remove(elem);
}

template<typename T>//+
Set<T> Set<T>::initSet(T &elem) {
	Set<T> set;
	set.add(elem);
	return *this;
}

template<typename T>//+
template<typename T_>
bool Set<T>::isUnique(SetItem<T_> setItem) {
	for (size_t i = 0; i < size; i++) {
		if (ptr.get()[i] == setItem) {
			return false;
		}
	}
}
