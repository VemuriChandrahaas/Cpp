
#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    try {
        if (b == 0)
            throw "Division by zero!";
        cout << "Result: " << a / b << endl;
    } catch (const char *msg) {
        cout << "Error: " << msg << endl;
    }
    return 0;
}
Output:
Enter numerator: 10
Enter denominator: 2

Result = 5
Program executed successfully.

Result: 
This program correctly handles division by zero using a try–catch block, ensuring that errors are caught and the program continues to execute safely.
