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
#include <Container/Entity/SetItem.hpp>


#include "IContainer.h"
#include "SetItem.hpp"
#include "SetIterator.hpp"
#include "errors.h"

template<typename T> class SetItem;
template<typename T> class SetIterator;

template <typename T>
class Set: public IContainer {

public:
	// Constructors
	Set();					// конструктор по умолчанию
	Set(T );
	Set(const Set<T> &set);	// конструктор копированя
	Set(std::initializer_list<std::initializer_list<T>>);	// конструктор со списком инициализации

	// Destructor
	virtual ~Set();

	// Methods
	void clear();
	bool isEmpty();
	size_t size();

};

#endif /* Container_hpp */
