//
// Created by Iluha on 28.04.2022.
//

#pragma once
#ifndef INC_28_04_2022_EX1__CLASSWORK__LIST_H
#define INC_28_04_2022_EX1__CLASSWORK__LIST_H

#include "node.h"

class list {
    node* head = nullptr;
    node* tail = nullptr;
public:
    list();
    list(const list &other);
    ~list();

    list& operator=(const list &other);
    node operator[](int index);

    void push(int data);
    void print();
    void popFront();
    void popBack();
};


#endif //INC_28_04_2022_EX1__CLASSWORK__LIST_H
