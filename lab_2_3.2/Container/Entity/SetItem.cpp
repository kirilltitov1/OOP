//
// Created by Кирилл Титов on 24.05.2020.
//

#include "SetItem.hpp"


template<typename T>
SetItem<T>::SetItem() {
	this->data = new T;
}

template<typename T>
SetItem<T>::SetItem(const SetItem &data) {
	this->data = data;
}

template<typename T>
SetItem<T>::SetItem(T data) {

	this->data = data;
}

template<typename T>
SetItem<T>::~SetItem() {

}