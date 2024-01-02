#include <iostream>
#include "list.h"
#include "node.h"
#include "stack_c.h"
using namespace std;

Stack_C::Stack_C(){
    stk = new List();
    }

    // Destructor
    Stack_C::~Stack_C(){
        delete stk;
    }

    void Stack_C::push(int data){
        stk->insert(data);
    }

    int Stack_C::pop(){
        if (stk == nullptr || stk->get_size() == 0) {
        throw runtime_error("Empty Stack");
        }
        return stk->delete_tail();
    }

    int Stack_C::get_element_from_bottom(int idx){
        if ( stk == nullptr || stk->get_size() == 0) {
        throw runtime_error("Empty Stack");
        }
        int size = stk->get_size();
        if (idx < 0 || idx >= size) {
        throw runtime_error ("Index out of range");
        }
        Node* node = stk->get_head()->next;
        for (int i = 0; i < idx; ++i) {
            node = node->next;
        }
        return node->get_value();
    }

    int Stack_C::get_element_from_top(int idx){
        if ( stk == nullptr || stk->get_size() == 0) {
            throw runtime_error("Empty Stack");
        }
        int size = stk->get_size();
        if (idx < 0 || idx >= size) {
            throw runtime_error("Index out of range");
        }
        Node* node = stk->get_head()->next;
        int remainingSteps = size - idx - 1;
        while (remainingSteps > 0 && node != nullptr) {
            node = node->next;
            remainingSteps--;
        }
        return node->get_value();
    }

    void Stack_C::print_stack(bool top_or_bottom){
        int size = stk->get_size();
        if (stk == nullptr || stk->get_size() == 0) {
        throw runtime_error ("Empty Stack");
        }
        else if (top_or_bottom) {
            // std::cout << "Top to Bottom: ";
            for (int i = 0; i < size; ++i) {
                cout << get_element_from_top(i) <<endl;
            }
        } 
        else {
            //cout << "Bottom to Top: ";
            for (int i = size - 1; i >= 0; --i) {
                cout << get_element_from_bottom(i) <<endl;
            }
        }
        //std::cout << std::endl;
    }

    int Stack_C::add(){
        if (stk->get_size() < 2) {
            throw runtime_error("Not enough arguments");
        }
        int operand1 = pop();
        int operand2 = pop();
        int result = operand1 + operand2;
        push(result);
        return result;
    }

    int Stack_C::subtract(){
        if (stk->get_size() < 2) {
            throw runtime_error("Not enough arguments");
        }
        int operand1 = pop();
        int operand2 = pop();
        int result = operand2 - operand1; // Note the order for subtraction
        push(result);
        return result;
    }

    int Stack_C::multiply(){
        if (stk->get_size() < 2) {
            throw runtime_error("Not enough arguments");
        }
        int operand1 = pop();
        int operand2 = pop();
        int result = operand1 * operand2;
        push(result);
        return result;
    }

    int Stack_C::divide(){
        if (stk->get_size() < 2) {
        throw runtime_error("Not enough arguments");
    }
    int operand1 = pop();
    int operand2 = pop();
    if (operand1 == 0) {
        throw runtime_error("Divide by Zero Error");
    }
    int result = operand2 / operand1; // Note the order for division
    int remainder = operand2 % operand1;
    if (operand1 < 0 && remainder != 0) {
        result--;
    }
    push(result);
    return result;
    }

        // Get a pointer to the linked list representing the stack

    List* Stack_C::get_stack(){
        return stk;

    } 

        // Get the size of the stack
    int Stack_C::get_size(){
        return stk->get_size();
    } 


