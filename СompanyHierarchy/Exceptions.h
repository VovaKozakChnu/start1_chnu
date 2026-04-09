#ifndef EXCEPTIONS_H
#define EXCEPTIONS_H
#include <exception>

class AuthException : public std::exception {
public:
    const char* what() const noexcept override { return "Access Denied: Invalid Password!"; }
};

class FileException : public std::exception {
public:
    const char* what() const noexcept override { return "Error: Could not open database file!"; }
};
#endif
