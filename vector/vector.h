//
// Created by Iluha on 29.06.2022.
//
#pragma once
#ifndef LIST_VECTOR_H
#define LIST_VECTOR_H

#include "../list/list.h"

class vector {
    list* array;
    int count;
    int size;
public:
    vector();
    vector(int size);
    ~vector();

    list& operator[](int index);
    void resize();
    void push(const list& List);
};


#endif //LIST_VECTOR_H
