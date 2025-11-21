
#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("sample.txt");
    fout << "Hello C++ File Handling!";
    fout.close();

    ifstream fin("sample.txt");
    string line;
    getline(fin, line);
    cout << "File Content: " << line << endl;
    fin.close();
    return 0;
} 

Output:
Welcome to File Handling in C++!


Result:
File handling operations using ofstream and ifstream were successfully implemented.
