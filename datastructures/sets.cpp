#include <iostream>
#include <unordered_set>
#include <set>

int main() {

    // 1. Unordered Set
    
    // Implements a hash table
    // Operations have O(1) average complexity but O(n) in the worst case due to hash collisions

    std::unordered_set<int> hashSet;

    hashSet.insert(30);
    hashSet.insert(10);
    hashSet.insert(20);
    hashSet.insert(40);
    hashSet.insert(50);

    // Print the elements (unordered)
    std::cout << "Unordered Set Elements: ";
    for (int num : hashSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // 2. Ordered Set
    
    // Implements a BST (Red-Black Tree)
    // Elements are sorted
    // Operations have O(log n) complexity

    std::set<int> orderedSet;

    orderedSet.insert(30);
    orderedSet.insert(10);
    orderedSet.insert(20);
    orderedSet.insert(40);
    orderedSet.insert(50);

    // Print the elements (always in sorted order)
    std::cout << "Ordered Set Elements: ";
    for (int num : orderedSet) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}
