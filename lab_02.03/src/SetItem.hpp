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
	this->data = data;
}

template<typename T>
SetItem<T>::SetItem(T data) {
	this->data = data;
}

template<typename T>
std::shared_ptr<SetItem<T>> &SetItem<T>::initSetItem(T data) {
	std::shared_ptr<SetItem<T>> setItem;
    setItem = std::make_shared<SetItem<T>>();
	
	if (!setItem) {
		throw MemError();
	}
	setItem->setData(data);
	return setItem;
}

template<typename T>
SetItem<T>::~SetItem() {
	std::cout << "SetItem destrutor\n";
}

template<typename T>
T SetItem<T>::getData() const {

	return nullptr;
}

template<typename T>
void SetItem<T>::setData(T data) {
	this->data = data;
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
