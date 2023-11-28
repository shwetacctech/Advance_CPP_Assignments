# Assignment 6: Mutable Lambda
## Description
This assignment focuses on understanding and utilizing mutable lambdas in C++. It explores the concept of mutable lambdas, their purpose, and how they
allow modifying variables captured by value within a lambda expression.

## Contents
Mutable Lambdas in C++<br>
Usage and Syntax<br>
Example Demonstrating Mutable Lambda<br>

## Mutable Lambdas in C++
**Lambda Expressions:** Lambda expressions in C++ allow the creation of anonymous functions.<br>
**Mutable Lambda:** A mutable lambda allows modifying variables captured by value within the lambda scope.<br>
**Usage and Syntax**
To allow modification of captured variables, the mutable keyword is used in lambda expressions.<br>
The mutable specifier enables modifications to variables captured by value inside the lambda body.<br>
Mutable lambdas provide a way to modify variables captured by value without affecting their original value outside the lambda.<br>

auto printFileNotFoundError = [&msg]() mutable<br>
    {<br>
        msg = "Error! File Not Found!\nThis is mutable lambda function execution";<br>
		std::cout<<msg<<std::endl;<br>
        
    };<br>
