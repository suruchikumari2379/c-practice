#include <iostream>
using namespace std;

class Number2;   // forward declaration

class Number1 {
    int a;   // private data
public:
    void setA(int x) { a = x; }   // setter
    friend void multiply(Number1 n1, Number2 n2);  // friend function
};

class Number2 {
    int b;   // private data
public:
    void setB(int y) { b = y; }   // setter
    friend void multiply(Number1 n1, Number2 n2);  // friend function
};

// Non-member friend function accessing both classes
void multiply(Number1 n1, Number2 n2) {
    cout << "Multiplication = " << n1.a * n2.b << endl;
}

int main() {
    Number1 obj1;
    Number2 obj2;

    obj1.setA(23);   // set value of a
    obj2.setB(45);   // set value of b

    multiply(obj1, obj2);   // Output: Multiplication = 1035
    return 0;
}


