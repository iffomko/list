//
// Created by Iluha on 29.06.2022.
//
#pragma once
#ifndef LIST_NODE_H
#define LIST_NODE_H

class node {
    int data;
    node* next = nullptr;
public:
    node();
    node(int data);
    node(const node &other);

    void setData(int data);
    int getData() const;

    void setNext(node* next);
    node* getNext();
};



#endif //LIST_NODE_H
