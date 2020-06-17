//
//  Set.cpp
//  lab_2_3
//
//  Created by Кирилл Титов on 23.05.2020.
//  Copyright © 2020 Кирилл Титов. All rights reserved.
//

#include "Set.hpp"

template<typename T>
Set<T>::Set() {
	std::cout << "Конструктор по умолчанию класса " ;
}

template<typename T>
Set<T>::Set(const Set<T> &set) {
	std::cout << "Конструктор копированя" ;
}

template<typename T>
Set<T>::Set(std::initializer_list<std::initializer_list<T>>) {
	std::cout << "Конструктор со списком инициализации" ;
}

template<typename T>
Set<T>::~Set() {
	std::cout << "Деструктор класса Set" ;
}
