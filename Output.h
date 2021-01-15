//
// Created by Uzivatel on 14.01.2021.
//

#ifndef ZAPOCTOVAPRACE_OUTPUT_H
#define ZAPOCTOVAPRACE_OUTPUT_H


class Output {
    int capacity;
    int counter;
    float *data;
public:
    Output(int size);
    ~Output();
    bool empty() const {return (counter == -1);}
    bool full() const{return (counter == capacity - 1);}
    int NumOfEl() const {return counter + 1;}
    void push(float d);
    void pop();
    float top() const { return data[counter];}
    int getCapacity() const { return capacity;}

};


#endif //ZAPOCTOVAPRACE_OUTPUT_H
