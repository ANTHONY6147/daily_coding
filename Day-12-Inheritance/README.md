# Day 12 - Inheritance in C++

## Topics Learned

1. What is inheritance
2. Base class
3. Derived class
4. Single inheritance
5. `protected` members
6. Multilevel inheritance
7. Hierarchical inheritance
8. Multiple inheritance
9. Constructor execution in inheritance
10. Method overriding
11. Constructor initializer lists
12. Reusing and extending existing class functionality

## Programs Completed

1. `single_inheritance.cpp`
2. `protected_member.cpp`
3. `multilevel_inheritance.cpp`
4. `hierarchical_inheritance.cpp`
5. `multiple_inheritance.cpp`
6. `constructor_inheritance.cpp`
7. `method_overriding.cpp`
8. `employee_manager.cpp`
9. `vehicle_inheritance.cpp`
10. `student_teacher.cpp`
11. `inheritance_challenge.cpp`

## Key Concepts

### Inheritance

Inheritance allows a derived class to acquire properties and member functions from a base class.

```cpp
class Dog : public Animal
{
};
```

Here, `Animal` is the base class and `Dog` is the derived class.

### Types of Inheritance

1. Single Inheritance
2. Multilevel Inheritance
3. Hierarchical Inheritance
4. Multiple Inheritance

### Access Specifiers

`protected` members can be accessed inside the class and by derived classes, but they cannot normally be accessed directly from outside.

### Constructor Order

When a derived object is created:

```text
Base Constructor
       ↓
Derived Constructor
```

The base class is initialized before the derived class.

### Constructor Initializer List

A derived constructor can initialize its base class using:

```cpp
Manager(string n, double s)
    : Employee(n, s)
{
}
```

The `Employee(n, s)` part calls the base-class constructor.

### Method Overriding

A derived class can provide its own implementation of a function inherited from the base class.

## Key Takeaways

1. Inheritance promotes code reuse.
2. A base class provides common functionality.
3. A derived class can reuse and extend the base class.
4. `protected` allows derived classes to access inherited members.
5. Constructors execute from base class to derived class.
6. Constructor initializer lists can initialize the base class.
7. Inheritance is an important foundation of Object-Oriented Programming.

## Status

**Day 12 Completed ✅**
