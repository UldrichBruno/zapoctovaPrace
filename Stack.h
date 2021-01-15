#ifndef ZAPOCTOVAPRACE_STACK_H
#define ZAPOCTOVAPRACE_STACK_H


class Stack {
    int capacity;
    int counter;
    char *data;
   // int precedence;
public:
    Stack(int size);
    ~Stack();
    bool empty() const {return (counter == -1);}
    bool full() const{return (counter == capacity - 1);}
    int NumOfEl() const {return counter + 1;}
    void push(char d);
    void pop();
    void popToOutput();
    float top() const { return data[counter];}
    int getCapacity() const { return capacity;}
};

#endif //ZAPOCTOVAPRACE_STACK_H
