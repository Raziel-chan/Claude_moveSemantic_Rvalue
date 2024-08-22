/*
Exercise:
Write a function called detectValueCategory that takes both lvalue and rvalue references to integers.
The function should print whether it received an lvalue or an rvalue.
Then, in the main function, call this function with different types of expressions.
*/

#include <iostream>
using namespace std;

void detectValueCategory(int& x) {
    // Implementation for lvalue reference
}

void detectValueCategory(int&& x) {
    // Implementation for rvalue reference
}

int main() {
    int a = 5;

    // Call detectValueCategory with different expressions

    return 0;
}