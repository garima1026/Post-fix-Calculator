#include<iostream>
#include <stdexcept>
using namespace std;
#include"node.h"

Node::Node(bool sentinel){sentinel=is_sentinel; }


Node::Node(int v, Node* nxt, Node* prv) {value=v;nxt=next;prv=prev;}

    // Return whether a node is a sentinel node 
    // Use it to check if we are at the ends of a list
bool Node::is_sentinel_node(){
    return is_sentinel;
}

    // Return the value of a node
int Node::get_value(){
    return value ;
}

