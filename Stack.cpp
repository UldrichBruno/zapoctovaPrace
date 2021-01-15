#include "Stack.h"
#include <iostream>

using namespace std;

Stack::Stack(int size)
        : capacity(size), counter(-1), data(new char[capacity])
{}

Stack::~Stack() {
    delete [] data;
}

void Stack::push(char d) {
    counter++;
    data[counter] = d;
}

void Stack::pop() {
    data[counter] = 0;
    counter --;
}

