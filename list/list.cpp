//
// Created by Iluha on 28.04.2022.
//

#include <iostream>
#include "list.h"

list::list() {};

list::~list() {
    node* current = this->head;

    while (current != nullptr) {
        node* nextPtr = current->getNext();
        delete current;

        current = nextPtr;
    }
}

void list::push(int data) {
    node* item = new node(data);

    if (this->head == nullptr) {
        this->head = item;
        this->tail = item;
    } else {
        this->tail->setNext(item);
        this->tail = item;
    }

    this->tail->setNext(nullptr);
}

node list::operator[](int index) {
    node* current = this->head;

    for (int i = 0; i < index; i++) {
        current = current->getNext();

        if (current == nullptr)
            break;
    }

    return *current;
}

list::list(const list &other) {
    node* current = this->head;

    while (current != nullptr) { // Clear previous list
        node* next = current->getNext();
        delete current;
        current = next;
    }

    node* otherCurr = other.head;

    while (otherCurr != nullptr) {
        this->push(otherCurr->getData());

        otherCurr = otherCurr->getNext();
    }
}

list& list::operator=(const list &other) {
    node* current = this->head;

    while (current != nullptr) { // Clear previous list
        node* next = current->getNext();
        delete current;
        current = next;
    }

    node* otherCurr = other.head;

    while (otherCurr != nullptr) {
        this->push(otherCurr->getData());

        otherCurr = otherCurr->getNext();
    }

    return *this;
}

void list::print() {
    node* current = this->head;

    while (current != nullptr) {
        std::cout << current->getData() << " ";
        current = current->getNext();
    }

    std::cout << std::endl;
}