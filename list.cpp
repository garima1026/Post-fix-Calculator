#include<iostream>
#include "node.h"
#include "list.h"


    List::List(){
        sentinel_head = new Node();
        Node* sentinel_head = new Node();
        }

    List::~List(){delete sentinel_head;}

    // Insert an element at the tail of the linked list 
    void List::insert(int v){
        Node* newNode = new Node(v, nullptr, nullptr); 
        Node* lastNode = sentinel_head;
        while (lastNode->next != nullptr) {
        lastNode = lastNode->next;
        }
        lastNode->next = newNode;
        newNode->prev = lastNode;
    }

    // Delete the tail of the linked list and return the value
    // You need to delete the valid tail element, not the sentinel
    int List::delete_tail(){
        Node* lastNode = sentinel_head;
        while (lastNode->next != nullptr && lastNode->next->next != nullptr) {
            lastNode = lastNode->next;
        }
        if (lastNode->next == nullptr) {
            throw std::runtime_error("List is empty");
        }
        int deletedValue = lastNode->next->get_value();
        delete lastNode->next;
        lastNode->next = nullptr;
        return deletedValue;
        return deletedValue;
    }

    // Return the size of the linked list 
    // Do not count the sentinel elements
    int List::get_size(){
        int size = 0;
        Node* currentNode = sentinel_head->next;
        while (currentNode != nullptr) {
        size++;
        currentNode = currentNode->next;
        }
        return size;
    }

    // Return a pointer to the sentinel head of the linked list 
    Node* List::get_head(){
        return sentinel_head;
    }

