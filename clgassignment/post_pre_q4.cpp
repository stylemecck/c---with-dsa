#include<iostream>
using namespace std;

int main() {
    int num = ;

    cout << "Initial value: " << num << endl;

    // Post increment
    cout << "Post Increment: " << num++ << endl;
    cout << "After Post Increment: " << num << endl;

    // Post decrement
    cout << "Post Decrement: " << num-- << endl;
    cout << "After Post Decrement: " << num << endl;

    // Pre increment
    cout << "Pre Increment: " << ++num << endl;
    cout << "After Pre Increment: " << num << endl;

    // Pre decrement
    cout << "Pre Decrement: " << --num << endl;
    cout << "After Pre Decrement: " << num << endl;

    return 0;
}
