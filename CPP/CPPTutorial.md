# Content
## Self-referencing.cpp - This is a basic example code illustrating the use of self-referencing operator aka 'this' operator in CPP.

Reference: [‘this’ pointer in C++](https://www.geeksforgeeks.org/this-pointer-in-c/)


## Operator-overloading.cpp - This is a simple code illustrating the use-case of operator overloading.

Reference: [Operator-overloading](https://www.geeksforgeeks.org/operator-overloading-c/)

Operator overloading is used to make operators work for user-defined classes.
By default operators can be used only for built-in data types.

Operators that can be overloaded

    Binary Arithmetic:     +, -, *, /, %
    Unary Arithmetic:     +, -, ++, —
    Assignment:     =, +=,*=, /=,-=, %=
    Bit- wise:     & , | , << , >> , ~ , ^
    De-referencing:     (->)
    Dynamic memory allocation and De-allocation:     New, delete 
    Subscript:     [ ]
    Function call:     ()
    Logical:     &,  | |, !
    Relational:     >, < , = =, <=, >=

Operators that cannot be overloaded

**sizeof** – This returns the size of the object or datatype entered as the operand. This is evaluated by the compiler and cannot be evaluated during runtime. The proper incrementing of a pointer in an array of objects relies on the sizeof operator implicitly. Altering its meaning using overloading would cause a fundamental part of the language to collapse.

**typeid** – This provides a CPP program with the ability to recover the actual derived type of the object referred to by a pointer or reference. For this operator, the whole point is to uniquely identify a type. If we want to make a user-defined type ‘look’ like another type, polymorphism can be used but the meaning of the typeid operator must remain unaltered, or else serious issues could arise.

**Scope resolution operator** – [Read more here](https://docs.microsoft.com/en-us/cpp/cpp/scope-resolution-operator?view=msvc-170)

**Class member access operators** (./dot operator) - In line 24 of *Operator-overloading.cpp*

    Complex c3 = c1 + c2; 

invokes the member function *operator +* in class Complex as follows:

    Complex c3 = c1.operator+(c2); 
Therefore to avoid ambiguity operator-overloading is not allowed for '.'
