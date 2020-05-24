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

<<<<<<< HEAD
class BaseError : public std::exception {
public:
    const char* what() const noexcept override {
=======
class baseError : public std::exception {
public:
    virtual const char* what() const throw() {
>>>>>>> master
        return "Some error was catched";
    }
};

<<<<<<< HEAD
class MemError : public BaseError {
    const char* what() const noexcept override {
=======
class memError : public baseError {
    const char* what() const throw() {
>>>>>>> master
        return "A memory allocation error";
    }
};

<<<<<<< HEAD
class RangeError : public BaseError {
    const char* what() const noexcept override {
=======
class rangeError : public baseError {
    const char* what() const throw() {
>>>>>>> master
        return "List is out of range";
    }
};

<<<<<<< HEAD
class CmpError : public BaseError {
public:
    const char* what() const noexcept override {
=======
class cmpIterError : public baseError {
public:
    const char* what() const throw() {
>>>>>>> master
        return "Comparing iterators with different sources";
    }
};

<<<<<<< HEAD
class EmptyError : public BaseError {
public:
    const char* what()  const noexcept {
=======
class emptyError : public baseError {
public:
    const char* what()  const throw() {
>>>>>>> master
        return "Attempt to work with empty list or empty element";
    }
};

#endif /* errors_h */
