# Day 9 - Pointers in C++

## Topics Learned

1. What is a pointer?
2. Memory addresses
3. Address-of operator `&`
4. Dereference operator `*`
5. Pointer declaration
6. Reading values using pointers
7. Modifying variables using pointers
8. Pointers and arrays
9. Pointer arithmetic
10. Pointers with functions
11. Passing pointers to functions
12. Swapping values using pointers
13. Pass by reference
14. Multiple pointers
15. Pointer to pointer

## Programs Completed

1. pointer_basic.cpp
2. address_operator.cpp
3. dereference.cpp
4. pointer_modify.cpp
5. pointer_array.cpp
6. pointer_arithmetic.cpp
7. pointer_function.cpp
8. swap_pointer.cpp
9. pass_by_reference.cpp
10. multiple_pointers.cpp
11. pointer_challenge.cpp

## Key Concepts

A pointer is a variable that stores the memory address of another variable.

The `&` operator is used to obtain the address of a variable.

The `*` operator is used to dereference a pointer and access the value stored at its address.

Example:

```cpp
int number = 10;
int* ptr = &number;