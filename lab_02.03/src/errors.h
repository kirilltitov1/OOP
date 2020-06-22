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
#include <string>

class BaseSetError: public std::exception {
public:
    BaseSetError(std::string _filename, std::string _name,
                    size_t _line,
                    std::string _info = "Error")
    {
        err_info = "\nFile name: " + _filename +
				"\nClass: " + _name +
                "\nLine #: " + std::to_string(_line) +
				"Info: " + _info;
    }
    virtual const char* what() const noexcept
    {
        return err_info.c_str();
    }
protected:
    std::string err_info;
};

class MemError: public BaseSetError {
public:
    MemError(std::string _filename, std::string _name,
                    size_t _line,
                    std::string _info = "Allocation error"):
    BaseSetError(_filename, _name, _line, _info) {};
    virtual const char* what() const noexcept
    {
        return err_info.c_str();
    }
};

class RangeError : public BaseSetError {
public:
    RangeError(std::string _filename, std::string _name,
                    size_t _line,
                    std::string _info = "Indext out of range"):
    BaseSetError(_filename, _name, _line, _info) {};
    virtual const char* what() const noexcept
    {
        return err_info.c_str();
    }
};

class CmpError : public BaseSetError {
public:
    CmpError(std::string _filename, std::string _name,
                    size_t _line,
                    std::string _info = "Compare error"):
    BaseSetError(_filename, _name, _line, _info) {};
    virtual const char* what() const noexcept
    {
        return err_info.c_str();
    }
};

class EmptyError : public BaseSetError {
public:
    EmptyError(std::string _filename, std::string _name,
                    size_t _line,
                    std::string _info = "Empty error"):
    BaseSetError(_filename, _name, _line, _info) {};
    virtual const char* what() const noexcept
    {
        return err_info.c_str();
    }
};

class IteratorError: public BaseSetError {
public:
	IteratorError(std::string _filename, std::string _name,
                    size_t _line,
                    std::string _info = "Itterator error"):
    BaseSetError(_filename, _name, _line, _info) {};
    virtual const char* what() const noexcept
    {
        return err_info.c_str();
    }
};

#endif /* errors_h */
