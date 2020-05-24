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
<<<<<<< HEAD


#include "IContainer.h"
#include "errors.h"

=======
#include "IContainer.h"
>>>>>>> master
template <typename T>
class Set: public IContainer {

public:
	// Constructors
<<<<<<< HEAD
	Set();					// конструктор по умолчанию
	Set(const Set<T> &set);	// конструктор копированя
	Set(std::initializer_list<std::initializer_list<T>>);	// конструктор со списком инициализации
=======
	Set();
//	explicit Set();
>>>>>>> master

	// Destructor
	virtual ~Set();

};

#endif /* Container_hpp */
