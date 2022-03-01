// usestack.cpp - for CS 24 lab practice using stacks
// ANTHONY JIN, 2/28/2022

#include "intstack.h"
#include <iostream>
#include <stack>
using namespace std;

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    cout << s.top() << endl;
    s.pop();
    cout<< s.top() << endl;

    while (!s.empty()) {
        cout << s.top() << endl;
        s.pop();
    }

    return 0;
}
