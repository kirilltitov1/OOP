//
// Created by Кирилл Титов on 24.05.2020.
//

#ifndef LAB_2_3_2_SETITERATOR_HPP
#define LAB_2_3_2_SETITERATOR_HPP

#include "IIterator.hpp"
#include "SetItem.hpp"

template<typename T>
class SetIterator: public IIterator<SetItem<T>> {
public:
	void first() override;
	void next() override;
	void last() override ;
	void inRange() override ;
};

#endif //LAB_2_3_2_SETITERATOR_HPP
