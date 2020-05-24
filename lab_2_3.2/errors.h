//
//  errors.h
//  lab_2_3
//
//  Created by Кирилл Титов on 23.05.2020.
//  Copyright © 2020 Кирилл Титов. All rights reserved.
//

#ifndef errors_h
#define errors_h

#include <exception>



class BaseError : public std::exception {
public:
    const char* what() const noexcept override {
        return "Some error was catched";
    }
};

class MemError : public BaseError {
    const char* what() const noexcept override {
        return "A memory allocation error";
    }
};

class RangeError : public BaseError {
    const char* what() const noexcept override {
        return "List is out of range";
    }
};

class CmpError : public BaseError {
public:
    const char* what() const noexcept override {
        return "Comparing iterators with different sources";
    }
};

class EmptyError : public BaseError {
public:
    const char* what()  const noexcept override {
        return "Attempt to work with empty list or empty element";
    }
};

#endif /* errors_h */
