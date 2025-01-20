#include <iostream>
#include <vector>
#include <logger.h>

using namespace std;

int main() {

    // 1.Call Logarithm function
    double input = 10.0;
    double result = log(input); 

    // 2.Log the result
    logger::log(result);

    return 0;
}
