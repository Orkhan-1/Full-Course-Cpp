#include <iostream>
#include <map>
#include <unordered_map>

int main() {
    
    // 1. Unordered Map
    
    // Implements a hash table
    // Operations have O(1) average complexity but O(n) in the worst case due to hash collisions

    std::unordered_map<int, std::string> unorderedMap;
    unorderedMap[3] = "Three";
    unorderedMap[1] = "One";
    unorderedMap[2] = "Two";

    std::cout << "Unordered Map result:" << std::endl;
    for (const auto& pair : unorderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }
    
    // 2. Ordered Map
    
    // Implements a BST (Red-Black Tree)
    // Elements are sorted by key
    // Operations have O(log n) complexity

    std::map<int, std::string> orderedMap;
    orderedMap[3] = "Three";
    orderedMap[1] = "One";
    orderedMap[2] = "Two";

    std::cout << "Ordered Map result:" << std::endl;
    for (const auto& pair : orderedMap) {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    std::cout << std::endl;

    return 0;
}
