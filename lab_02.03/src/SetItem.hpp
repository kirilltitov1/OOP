//
// Created by Кирилл Титов on 24.05.2020.
//

#include "SetItem.h"


template<typename T>
SetItem<T>::SetItem() {
	this->data = NULL;
}

template<typename T>
SetItem<T>::SetItem(const SetItem &data) {
	return this->data = data;
}

template<typename T>
SetItem<T>::SetItem(T data) {
	return this->data = data;
}

template<typename T>
SetItem<T>::~SetItem() {
	std::cout << "SetItem destrutor";
}

template<typename T>
T SetItem<T>::getData() const {

	return nullptr;
}


template<typename T>
bool SetItem<T>::operator==(const SetItem<T> &elem) const {

	return false;
}

template<typename T>
bool SetItem<T>::operator>=(const SetItem<T> &l) const {

	return false;
}

template<typename T>
bool SetItem<T>::operator<=(const SetItem<T> &l) const {

	return false;
}

template<typename T>
bool SetItem<T>::operator!=(const SetItem<T> &l) const {

	return false;
}

template<typename T>
bool SetItem<T>::operator>(const SetItem<T> &l) const {

	return false;
}

template<typename T>
bool SetItem<T>::operator<(const SetItem<T> &l) const {

	return false;
}
