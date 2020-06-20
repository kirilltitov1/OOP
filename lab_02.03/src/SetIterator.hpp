//
// Created by Кирилл Титов on 24.05.2020.
//

#include "SetIterator.h"

//MARK: - SetIteratorBase
template<typename T>
SetIteratorBase<T>::SetIteratorBase() {
	
}

template<typename T>
SetIteratorBase<T>::SetIteratorBase(const SetIteratorBase<T> &setIterator) {
	
}

template<typename T>
SetIteratorBase<T>::SetIteratorBase(const std::shared_ptr<SetItem<T>> item) {
	
}

template<typename T>
SetIteratorBase<T> &SetIteratorBase<T>::operator=(const SetIteratorBase<T> &listIter) {
	
}

template<typename T>
SetIteratorBase<T> &SetIteratorBase<T>::operator++() {
	
}

template<typename T>
SetIteratorBase<T> SetIteratorBase<T>::operator++(int) {
	
}

template<typename T>
bool SetIteratorBase<T>::operator==(const SetIteratorBase<T> &setIterator) const {
	
}

template<typename T>
bool SetIteratorBase<T>::operator!=(const SetIteratorBase<T> &setIterator) const {
	
}

template<typename T>
SetIteratorBase<T> &SetIteratorBase<T>::next() {
	
}

//MARK: - SetIterator
template<typename T>
SetIterator<T>::SetIterator() {
	
}

template<typename T>
SetIterator<T>::SetIterator(const SetIterator<T> &setIterator) {
	
}

template<typename T>
SetIterator<T>::SetIterator(const std::shared_ptr<SetItem<T>> item) {
	
}

template<typename T>
T &SetIterator<T>::next() {
	
}

template<typename T>
const T &SetIterator<T>::next() const {
	
}

template<typename T>
T &SetIterator<T>::operator*() {
	
}

template<typename T>
T *SetIterator<T>::operator->() {
	
}

template<typename T>
const T &SetIterator<T>::operator*() const {
	
}

template<typename T>
const T *SetIterator<T>::operator->() const {
	
}

template<typename T>
SetIterator<T>::operator bool() const {
	
}

//MARK: - ConstSetIterator
template<typename T>
ConstSetIterator<T>::ConstSetIterator() {
	
}

template<typename T>
ConstSetIterator<T>::ConstSetIterator(const ConstSetIterator<T> &setIteratoc) {
	
}

template<typename T>
ConstSetIterator<T>::ConstSetIterator(std::shared_ptr<SetItem<T>> item) {
	
}

template<typename T>
ConstSetIterator<T> &ConstSetIterator<T>::operator=(const ConstSetIterator<T> &setIterator) {
	
}

template<typename T>
T &ConstSetIterator<T>::next() {
	
}

template<typename T>
const T &ConstSetIterator<T>::next() const {
	
}

template<typename T>
const T &ConstSetIterator<T>::operator*() const {
	
}

template<typename T>
const T *ConstSetIterator<T>::operator->() const {
	
}

template<typename T>
ConstSetIterator<T>::operator bool() const {
	
}
