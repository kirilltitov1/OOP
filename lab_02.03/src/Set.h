
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

public:
//MARK:- Constructors
	Set();								// конструктор по умолчанию

	//	Set(size );
	template<typename T_>
	explicit Set(T_ elem, size_t count);			// конструктор с переменными
	
	Set(const Set<T> &set);				// конструктор копирования
	
	template<typename T_>
	Set(const Set<T> &&set) noexcept;	// конструктор перемещения
	
	template<typename Iterator>
	Set(Iterator first, Iterator last);
	
	template<typename T_>
	Set(std::initializer_list<std::initializer_list<T_>>);	// конструктор со списком инициализации

//MARK:- Destructor
	virtual ~Set();

	
//MARK:- Methods
	void clear();
	bool isEmpty();
	size_t size();
	Set<T> initSet(T data);
	
	Set<T> &append();
	Set<T> &addSet();
	
	SetIterator<T> first();
	SetIterator<T> last();
	
	void allocMemory(size_t size);

};

#endif /* Container_hpp */
