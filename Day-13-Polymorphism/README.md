# Day 13 - Polymorphism in C++

## Topics Learned

1. What is polymorphism
2. Compile-time polymorphism
3. Function overloading
4. Constructor overloading
5. Operator overloading
6. Runtime polymorphism
7. Virtual functions
8. Function overriding
9. Base-class pointers
10. `override` keyword
11. Pure virtual functions
12. Abstract classes
13. Virtual destructors
14. Runtime polymorphism using practical examples

## Programs Completed

1. `function_overloading.cpp`
2. `constructor_overloading.cpp`
3. `operator_overloading.cpp`
4. `runtime_polymorphism.cpp`
5. `virtual_function.cpp`
6. `function_overriding.cpp`
7. `base_pointer.cpp`
8. `virtual_destructor.cpp`
9. `pure_virtual.cpp`
10. `abstract_class.cpp`
11. `shape_polymorphism.cpp`
12. `employee_polymorphism.cpp`
13. `polymorphism_challenge.cpp`

## What Is Polymorphism?

Polymorphism means **one interface with multiple forms**.

It allows the same function or interface to behave differently depending on the situation.

## Types of Polymorphism

### 1. Compile-Time Polymorphism

The compiler determines which function to call.

Examples:

- Function overloading
- Constructor overloading
- Operator overloading

Example:

```cpp
class Calculator
{
public:

    int add(int a, int b)
    {
        return a + b;
    }

    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};