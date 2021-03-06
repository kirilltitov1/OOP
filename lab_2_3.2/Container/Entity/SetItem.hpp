//
// Created by Кирилл Титов on 24.05.2020.
//

#ifndef LAB_2_3_2_SETITEM_HPP
#define LAB_2_3_2_SETITEM_HPP

#include "Set.hpp"

template<typename T> class Set;
template<typename T> class SetIterator;

template<typename T>
class SetItem {
public:

	// Constructor
	SetItem();
	explicit SetItem(T data);
	SetItem(const SetItem&);

	// Destructor
	virtual ~SetItem();

	// Methods
	T getData() const;

	// Operators
	bool operator ==(const SetItem<T>& elem) const;
	bool operator >=(const SetItem<T>& l) const;
	bool operator <=(const SetItem<T>& l) const;
	bool operator !=(const SetItem<T>& l) const;
	bool operator >(const SetItem<T>& l) const;
	bool operator <(const SetItem<T>& l) const;

protected:
	T data;

	friend class Set<T>;
	friend class SetIterator<T>;

};

#endif //LAB_2_3_2_SETITEM_HPP
