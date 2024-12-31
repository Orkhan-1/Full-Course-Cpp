#include <iostream>
#include <vector>
#include "logger.h"

// using namespace std;

int main() {

    // 1.Call Logarithm function
    double result = std::log(10.0); 

    // 2.Log the result
    logger::log(result);

    return 0;
}
