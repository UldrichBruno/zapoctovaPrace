#include <iostream>
using namespace std;
#include "Stack.h"
#include "Output.h"


template <typename T>
void show(T &s) {
    while (!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}
int main(int argc, char** argv) {
    Stack stack(50);
    Output output(50);
    for (int i = 1; i < argc; ++i) {
        if(*argv[i] <= 47 && *argv[i] >= 40){
            stack.push(*argv[i]);
        } else {
            output.push(*argv[i]);
        }
    }
    show(stack);
    cout << "output" << endl;
    show(output);
   /* cout << "You have entered " << argc
         << " arguments:" << "\n";

    for (int i = 0; i < argc; i++)
        cout << argv[i] << "\n";*/
/*Stack pokus(5);
pokus.push(3);
pokus.push(3.14);
pokus.push(7);
pokus.push(-1);
show(pokus);


Output pokusny(5);
pokusny.push(5);
pokusny.push(2.71);
pokusny.push(8);
pokusny.push(-9);
pokusny.push(4);
show(pokusny);*/
return 0;
}