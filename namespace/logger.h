#ifndef LOGGER_H
#define LOGGER_H

#include <iostream>

namespace logger {
    void log(double value) {
        std::cout << "Log result: " << value << std::endl;
    }
}

#endif
