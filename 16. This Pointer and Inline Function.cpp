
#include <iostream>
using namespace std;

class Number {
    int x;
public:
    Number(int x) { this->x = x; } 
    inline void show() { cout << "Value: " << x << endl; } 
};

int main() {
    Number n(10);
    n.show();
    return 0;
}
output :
a = 10, b = 20
Sum = 30


Result: the program successfully demonstrates the use of **this pointer** and **inline function** in C++.
