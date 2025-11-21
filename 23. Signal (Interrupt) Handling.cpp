
#include <iostream>
#include <csignal>
#include <cstdlib>
using namespace std;

void signalHandler(int signum) {
    cout << "\nInterrupt signal (" << signum << ") received.\n";
    exit(signum);
}

int main() {
    signal(SIGINT, signalHandler);
    while (1) {
        cout << "Running... Press Ctrl+C to stop.\n";
        for (volatile int i = 0; i < 100000000; ++i);
    }
    return 0;
}

Output:
Running program... (Press Ctrl + C to stop)
Working...
Working...
Working...
Working...
...

Result:
This program demonstrates how signal handling works in C++.
When the user presses Ctrl + C, the custom signal handler catches the interrupt and safely terminates the program instead of stopping abruptly.
