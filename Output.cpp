//
// Created by Uzivatel on 14.01.2021.
//

#include "Output.h"

void Output::push(float d) {
    counter++;
    if(counter > 0 ) {
        for (int i = counter; i > 0; i--) {
            data[i] = data[i - 1];
        }
    }
    data[0] = d;
}

void Output::pop() {
    data[counter] = 0;
    counter --;
}

Output::Output(int size)
        : capacity(size), counter(-1), data(new float[capacity])
{}

Output::~Output() {
    delete [] data;
}
