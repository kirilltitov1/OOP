//
// Created by Кирилл Титов on 24.05.2020.
//

#ifndef LAB_2_3_2_SETITEM_HPP
#define LAB_2_3_2_SETITEM_HPP

#include <cstddef>
#include <iostream>
#include <memory>

#include "Set.h"

template<typename T> class Set;
template<typename T> class SetIterator;

template<typename T>
class SetItem {
protected:
	T data;
public:

	//MARK:- Constructor
	SetItem() = default;
	explicit SetItem(T data);
	SetItem<T> &initSetItem(T data);

	//MARK:- Destructor
	virtual ~SetItem() = default;

	//MARK:- Methods
	T getData() const;
	T &getPtrData();
	
	void setData(T data);

	bool inline isEqual(const SetItem<T>& elem) const;
	bool operator ==(const SetItem<T>& elem) const;
	bool operator !=(const SetItem<T>& elem) const;
	bool operator >=(const SetItem<T>& elem) const;
	bool operator <=(const SetItem<T>& elem) const;
	bool operator  >(const SetItem<T>& elem) const;
	bool operator  <(const SetItem<T>& elem) const;
//	std::iostream& operator<<(std::ostream& os, const SetItem<T> &item);

//	friend class Set<T>;
//	friend class SetIterator<T>;

};

#endif //LAB_2_3_2_SETITEM_HPP
