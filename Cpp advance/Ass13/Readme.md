# Assignment 13: Interfacing to C
## Description
This assignment aims to explore the interoperability between C++ and C programming languages. It involves understanding how to interface C++ code with C code, utilizing C functions and data types within C++ programs, and ensuring seamless communication between the two languages.

## Contents
Introduction to Interfacing C and C++
Usage and Best Practices
Example Interfacing Code
How to Run the Example
## Introduction to Interfacing C and C++
Interfacing: Interfacing refers to the ability of C++ to use C functions and data types and vice versa. It enables interoperability between C and C++ code.
## Usage and Best Practices
C++ Wrappers: Use C++ wrappers or interfaces to encapsulate C functions and structures, providing a more C++-friendly interface.
C Linkage: Utilize extern "C" to ensure C++ functions are compatible with C linkage.
Data Type Compatibility: Be mindful of data type compatibility between C and C++ to avoid type-related issues.
#ifndef INTERFACING_H<br>
#define INTERFACING_H<br>

#ifdef __cplusplus<br>
extern "C"{<br>
    #include <stdio.h><br>
    void printSuccess();<br>

}<br>
#else<br>
#include <stdio.h><br>
void printSuccess();<br>
#endif<br>
#endif<br>
