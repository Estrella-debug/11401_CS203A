# Abstract Data Type (ADT)

## Description
Abstract Data Types (ADTs) are one of the most important ideas we learn in computer science. Basically, an ADT is just a way to describe a data structure by focusing on what it does—its behavior—instead of how it works inside.

## Abstract Data Type
### **ADT specifies:**
- A set of operations.
- The mathematical model of the data.
  
### **Common Examples**
- Stacks
- Queues
- Lists
- Sets

Hiding the implementation complexity is the biggest win. ADTs allow us to prioritize logic and problem-solving, effectively skipping over the tedious, low-level details.

## Examples of ADTs
### **Standard Template Library (STL)**
The Standard Template Library (STL) in C++ exemplifies ADTs. It offers a collection of well-defined data structures such as:
- ***vector***
- ***list***
- ***stack***
- ***queue***
  
The structures are defined by their operations/behavior, and the implementation is abstracted. This separation is key, letting developers focus on problem-solving and use the structures without knowing the internal code.

### **Boost C++ Libraries**
The Boost C++ Libraries also illustrate ADTs. In Boost:
  - The library headers define the ADT by specifying the interface and behavior.
  - The corresponding .cpp files provide the implementation.

Because the interface and the implementation are separate (just like a proper ADT), this design allows developers to focus on what the features do, rather than getting lost in the complexity of how they're coded internally.
