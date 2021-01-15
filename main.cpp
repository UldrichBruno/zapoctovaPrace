#include <iostream>
#include <cstdlib>
#include <cstring>
#include "Stack.h"
#include "Output.h"

using namespace std;

template <typename T>
void show(T &s) {
    while (!s.empty()){
        cout << s.top() << endl;
        s.pop();
    }
}
int main() {
    Stack stack(50);
    Output output(50);
    char str[20];
    cout << "Zadejte algebraický výraz:" << endl;
    cin.getline(str, 50);
    char *token = strtok(str, " ");

    while (token != nullptr)
    {
        if(*token < 48 || *token == 94){
            if(*token == 41){
                while (stack.top() != 40){
                    cout << "Odebere se ze zásobníku" << endl;
                    output.push(stack.top());
                    stack.pop();
                    cout << stack.top() << endl;
                }
            } else if (*token == 43 || *token == 45){
                while ((stack.top() != 43 || stack.top() != 45) && !stack.empty()){
                    cout << "Odebere se ze zásobníku" << endl;
                    output.push(stack.top());
                    stack.pop();
                    cout << stack.top() << endl;
                }
            }
            cout << "Přidá se do zásobníku" << endl;
            stack.push(*token);
            cout << stack.top() << endl;
        } else {
            cout << "Přidá se do fronty" << endl;
           // printf("%s\n", token);
            float fToken = atof(token);
            output.push(fToken);
        }
        token = strtok(nullptr, " ");
    }
    while (!stack.empty()){
        output.push(stack.top());
        stack.pop();
    }
    cout << "Zásobník" << endl;
    show(stack);
    cout << "Fronta" << endl;
    show(output);
return 0;
}