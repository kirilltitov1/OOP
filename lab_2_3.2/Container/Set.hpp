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
#include "IContainer.h"
template <typename T>
class Set: public IContainer {

public:
	// Constructors
	Set();
//	explicit Set();

	// Destructor
	virtual ~Set();

};

#endif /* Container_hpp */
