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
  /*  switch (d){
        case 43:
            precedence = 1;
            break;
        case 45:
            precedence = 1;
            break;
        case 42:
            precedence = 2;
        case 47:
            precedence = 2;
            break;
    }*/
}

void Stack::pop() {
    data[counter] = 0;
    counter --;
}
