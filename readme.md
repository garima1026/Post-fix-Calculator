# Post-fix Calculator

This project implements a Reverse Polish Notation (RPN) calculator, also known as a post-fix notation calculator. It includes two parts:

## Part 1: Using Stacks on Fixed-Sized Arrays (stack_a.cpp)

### Functions:
- `void push(int data)`: Push the argument on the stack.
- `int pop()`: Pop and return the top element of the stack.
- `int get_element_from_top(int idx)`: Return the element at index idx from the top.
- `int get_element_from_bottom(int idx)`: Return the element at index idx from the bottom.
- `void print_stack(bool top)`: Print the elements of the stack, one number per line. If top = 1, start printing from the top, else bottom.
- `int add()`: Pop and add the top two elements of the stack and push the result back onto the stack.
- `int subtract()`: Pop the top two elements from the stack. Subtract the top element from the second element and push the results back onto the stack.
- `int multiply()`: Pop two elements from the stack and multiply them, pushing the result back onto the stack.
- `int divide()`: Pop two elements from the stack. Divide the second from the top element by the top element of the stack. Push the floor of the result, i.e., ⌊res⌋ back onto the stack.
- `int* get_stack()`: Return a pointer to the array used for the stack.

## Part 2: Using Stacks on Dynamically-Sized Arrays (stack_b.cpp)

### Functions:
- `List* get_stack()`: Return a pointer to the Linked List used for the stack.

## Part 3: Using Stacks made using Doubly Linked Lists(stack_c.cpp, node.cpp, list.cpp)
This part implements a Reverse Polish Notation (RPN) calculator using a stack based on a doubly linked list.

## Functions:

- `void push(int data)`: Push the argument on the stack.
- `int pop()`: Pop and return the top element of the stack.
- `int get_element_from_top(int idx)`: Return the element at index idx from the top.
- `int get_element_from_bottom(int idx)`: Return the element at index idx from the bottom.
- `void print_stack(bool top)`: Print the elements of the stack, one number per line. If top = 1, start printing from the top, else bottom.
- `int add()`: Pop and add the top two elements of the stack and push the result back onto the stack.
- `int subtract()`: Pop the top two elements from the stack. Subtract the top element from the second element and push the results back onto the stack.
- `int multiply()`: Pop two elements from the stack and multiply them, pushing the result back onto the stack.
- `int divide()`: Pop two elements from the stack. Divide the second from the top element by the top element of the stack. Push the floor of the result, i.e., ⌊res⌋ back onto the stack.
- `int* get_stack()`: Return a pointer to the array used for the stack.
