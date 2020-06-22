//
// Created by Кирилл Титов on 24.05.2020.
//

#include "SetIterator.h"

//MARK: - SetIteratorBase
template<typename T>
SetIteratorBase<T>::SetIteratorBase() {}
//template<typename T>
//SetIterator<T>::SetIterator() {}
template<typename T>
ConstSetIterator<T>::ConstSetIterator() {}


template<typename T>
SetIteratorBase<T>::SetIteratorBase(const SetIteratorBase<T> &setIterator) {
	this->curIndex = setIterator.curIndex;
	this->size = setIterator.size;
}
//template<typename T>
//SetIterator<T>::SetIterator(const SetIterator<T> &setIterator) {
//	this->curIndex = setIterator.curIndex;
//}
template<typename T>
ConstSetIterator<T>::ConstSetIterator(const ConstSetIterator<T> &setIterator) {
	this->curIndex = setIterator.curIndex;
	this->size = setIterator.size;
}


template<typename T>
SetIteratorBase<T> &SetIteratorBase<T>::operator=(const SetIteratorBase<T> &setIterator) {
    if (this != &setIterator)
    {
		this->curIndex = setIterator.curIndex;
		this->size = setIterator.size;
    }
    return *this;
}
//template<typename T>
//SetIterator<T> &SetIterator<T>::operator=(const SetIterator<T> &setIterator) {
//	if (setIterator) {
//		this->curIndex = setIterator.curIndex;
//	}
//	return *this;
//}
template<typename T>
ConstSetIterator<T> &ConstSetIterator<T>::operator=(const ConstSetIterator<T> &setIterator) {
	if (setIterator) {
		this->curIndex = setIterator.curIndex;
		this->size = setIterator.size;
	}
	return *this;
}


template<typename T>
SetIteratorBase<T> &SetIteratorBase<T>::operator++() {
	this->next();
	return *this;
}

template<typename T>
SetIteratorBase<T> SetIteratorBase<T>::operator++(int) {
	SetIteratorBase<T> iterator(*this);
	this->operator++();
	return iterator;
}


template<typename T>
bool SetIteratorBase<T>::operator==(const SetIteratorBase<T> &setIterator) const {
	return this->curIndex = setIterator.curIndex;
}

template<typename T>
bool SetIteratorBase<T>::operator!=(const SetIteratorBase<T> &setIterator) const {
	return this->curIndex = setIterator.curIndex;
}


template<typename T>
SetIteratorBase<T> &SetIteratorBase<T>::next() {
	if (this->curIndex < size) {
		++(this->curIndex);
	}
	return *this;
}
//template<typename T>
//SetIterator<T> &SetIterator<T>::next() {
//	++(this->curIndex);
//	return *this;
//}
template<typename T>
ConstSetIterator<T> &ConstSetIterator<T>::next() {
	this->validate_end();
	++(this->curIndex);
	return *this;
}


template<typename T>
const T &SetIterator<T>::operator*() const {
    if (this->data.expired())
    {
        throw IteratorError(__FILE__, typeid(*this).name(), __LINE__);
    }
	if (this->curIndex == this->size) {
		throw RangeError(__FILE__, typeid(*this).name(), __LINE__);
	}
    return this->data.lock()[this->curIndex];
}
//template<typename T>
//const T &SetIterator<T>::operator*() const {
//	if (this->curPtr.expired())
//    {
//        throw MemError();
//    }
//    return this->curPtr.lock()->getPtrData();
//}
template<typename T>
const T &ConstSetIterator<T>::operator*() const {
	if (this->data.expired())
    {
        throw IteratorError(__FILE__, typeid(*this).name(), __LINE__);
    }
	if (this->curIndex == this->size) {
		throw RangeError(__FILE__, typeid(*this).name(), __LINE__);
	}
    return this->data.lock()[this->curIndex];
}


template<typename T>
const T *SetIterator<T>::operator->() const {
	if (this->data.expired())
    {
        throw IteratorError(__FILE__, typeid(*this).name(), __LINE__);
    }
	if (this->curIndex == this->size) {
		throw RangeError(__FILE__, typeid(*this).name(), __LINE__);
	}
    return &this->data.lock()[this->curIndex];
}
//template<typename T>
//const T *SetIterator<T>::operator->() const {
//	if (this->curPtr.expired())
//    {
//        throw MemError();
//    }
//    return &this->ptrCur.lock()->getPtrData();
//}
template<typename T>
const T *ConstSetIterator<T>::operator->() const {
	if (this->data.expired())
    {
        throw IteratorError(__FILE__, typeid(*this).name(), __LINE__);
    }
	if (this->curIndex == this->size) {
		throw RangeError(__FILE__, typeid(*this).name(), __LINE__);
	}
    return &this->data.lock()[this->curIndex];
}


//template<typename T>
//SetIterator<T>::operator bool() const {
//	return &this->curPtr.expired();
//}
template<typename T>
ConstSetIterator<T>::operator bool() const {
	return &this->curPtr.expired();
}

//template<typename T>
//void SetIteratorBase<T>::validate_end() {
//	if (this->curIndex >= this->size) {
//		throw RangeError();
//	}
//}
