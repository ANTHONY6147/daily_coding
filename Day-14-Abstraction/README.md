# Day 14 - Abstraction & Advanced OOP in C++

## Topics Learned

1. Abstraction
2. Abstract classes
3. Pure virtual functions
4. Interface-like design using abstract classes
5. Encapsulation vs abstraction
6. Composition
7. Aggregation
8. IS-A relationship
9. HAS-A relationship
10. Nested classes
11. `const` member functions
12. Static data members
13. Static member functions
14. Practical OOP design

## Programs Completed

1. `abstraction_basic.cpp`
2. `abstract_class.cpp`
3. `pure_virtual.cpp`
4. `interface.cpp`
5. `encapsulation_vs_abstraction.cpp`
6. `composition.cpp`
7. `aggregation.cpp`
8. `is_a_has_a.cpp`
9. `nested_class.cpp`
10. `const_member.cpp`
11. `static_member.cpp`
12. `static_function.cpp`
13. `oop_system.cpp`
14. `day14_challenge.cpp`

## What Is Abstraction?

Abstraction means exposing the essential functionality while hiding unnecessary implementation details.

For example, an ATM allows a user to:

- Check balance
- Deposit money
- Withdraw money

The user does not need to know how the banking system internally processes the transaction.

## Abstract Class

An abstract class is a class that contains at least one pure virtual function.

Example:

```cpp
class Shape
{
public:
    virtual double area() = 0;
};