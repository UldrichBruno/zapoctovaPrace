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
        if(*token < 48){
            cout << "Přidá se do zásobníku" << endl;
            stack.push(*token);
        } else {
            cout << "Přidá se do fronty" << endl;
           // printf("%s\n", token);
            float fToken = atof(token);
            output.push(fToken);
        }
        token = strtok(nullptr, " ");
    }
    cout << "Zásobník" << endl;
    show(stack);
    cout << "Fronta" << endl;
    show(output);

return 0;
}