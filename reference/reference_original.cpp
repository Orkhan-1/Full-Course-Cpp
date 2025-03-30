#include <iostream>
using namespace std;

void modify(int& x) { // x is a reference to the original variable
    x = 10; // Changes the original variable
}

int main() {
    int num = 5;
    modify(num);
    cout << num; // Output: 10 (num is changed)
    return 0;
}
