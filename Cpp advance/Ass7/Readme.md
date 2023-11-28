# Assignment 7: Generalized Capture with Initialization
## Description
This assignment focuses on understanding the concept of generalized capture in C++ lambda expressions, particularly the ability to perform initialization
within the capture clause. It explores the syntax and usage of generalized capture with initialization in lambda expressions.

## Contents
Generalized Capture in C++ Lambdas<br>
Usage and Syntax<br>
Example Demonstrating Generalized Capture with Initialization<br>

## Generalized Capture in C++ Lambdas
**Lambda Expressions**: Lambda expressions in C++ provide a concise way to create anonymous functions.<br>
**Generalized Capture**: Generalized capture allows capturing variables from the enclosing scope by value or reference, with the ability to perform initialization.<br>
**Usage and Syntax**
In C++14 and later, lambda captures can perform generalized captures with initialization by using the syntax [init-capture] or [&init-capture] to capture<br>
and initialize variables.<br>
The init-capture allows initialization and capture of variables outside the lambda scope.<br>
Initialization in captures supports both copy-initialization (=) and direct-initialization ({}).<br>
