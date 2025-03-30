#include <iostream>
using namespace std;

void modify(int x) { // x is a copy of the original variable
    x = 10; // Changes only the copy, not the original
}

int main() {
    int num = 5;
    modify(num);
    cout << num; // Output: 5 (num is NOT changed)
    return 0;
}
