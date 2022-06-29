//
// Created by Iluha on 29.06.2022.
//

#include "node.h"

node::node() {}

node::node(const node &other) {
    this->data = other.data;
    this->next = other.next;
}

node::node(int data) {
    this->data = data;
}

void node::setNext(node *next) {
    this->next = next;
}

node *node::getNext() {
    return this->next;
}

void node::setData(int data) {
    this->data = data;
}

int node::getData() const {
    return this->data;
}