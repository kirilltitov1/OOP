//
//  SetItem.hpp
//  lab_02.03
//
//  Created by Кирилл Титов on 17.06.2020.
//

#include "SetItem.h"

//MARK:- Constructors
template<typename T>
SetItem<T>::SetItem(T data) {
	this->data = data;
}

template<typename T>
std::shared_ptr<SetItem<T>> &SetItem<T>::initSetItem(T data) {
	return false;
}

//MARK:- Methods
template<typename T>
T SetItem<T>::getData() const {
	return this->data;
}

template<typename T>
T &SetItem<T>::getPtrData() const {
	return this->data;
}

template<typename T>
bool SetItem<T>::operator<(const SetItem<T> &elem) const {
	return false;
}

template<typename T>
bool SetItem<T>::operator==(const SetItem<T> &elem) const {
	return false;
}

template<typename T>
bool SetItem<T>::operator>=(const SetItem<T> &elem) const {
	return false;
}

template<typename T>
bool SetItem<T>::operator<=(const SetItem<T> &elem) const {
	return false;
}

template<typename T>
bool SetItem<T>::operator!=(const SetItem<T> &elem) const {
	return false;
}

template<typename T>
bool SetItem<T>::operator>(const SetItem<T> &elem) const {
	return false;
}

template<typename T>
SetItem<T> &SetItem<T>::next() {
	return false;
}

template<typename T>
void SetItem<T>::setData(T data) {

}
