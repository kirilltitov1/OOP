//
// Created by Кирилл Титов on 24.05.2020.
//

#ifndef LAB_2_3_2_SETITERATOR_HPP
#define LAB_2_3_2_SETITERATOR_HPP

#include <cstddef>
#include <iostream>
#include <memory>

#include "IIterator.h"
//#include "SetItem.h"


template<typename T> class Set;


template<typename T>
class SetIterator: public IIterator<T>, public std::iterator<std::input_iterator_tag, T> {
public:
	SetIterator<T> next() override;
//	void inRange() override;
};

#endif //LAB_2_3_2_SETITERATOR_HPP
