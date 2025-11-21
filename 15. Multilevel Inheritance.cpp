
#include <iostream>
using namespace std;

class A {
protected:
    int a;
public:
    void getA() { cout << "Enter A: "; cin >> a; }
};

class B : public A {
protected:
    int b;
public:
    void getB() { cout << "Enter B: "; cin >> b; }
};

class C : public B {
public:
    void display() { cout << "Sum: " << a + b << endl; }
};

int main() {
    C obj;
    obj.getA();
    obj.getB();
    obj.display();
    return 0;
}
Output:
Enter Roll Number: 102
Enter marks in two subjects: 85 90
Roll Number: 102
Total Marks: 175


Result:
Multilevel inheritance was implemented successfully.
Data was transferred and accessed across multiple levels of inheritance


 
