//
// Created by Iluha on 29.06.2022.
//

#include "vector.h"

vector::vector() {
    this->size = 10;
    this->count = 0;
    this->array = new list[10];
}

vector::vector(int size) {
    this->count = 0;
    this->size = size;
    this->array = new list[size];
}
vector::~vector() {
    delete[] this->array;
}

void vector::resize() {
    list* temp = this->array;

    this->size *= 2;
    this->array = new list[this->size];

    for (int i = 0; i < this->count; i++)
        this->array[i] = temp[i];

    delete[] temp;
}

list& vector::operator[](int index) {
    return this->array[index];
}

void vector::push(const list &List) {
    if (this->count == this->size)
        this->resize();

    this->array[this->count++] = List;
}