#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::vector<int> nums = {1, 2, 2, 2, 3, 4, 5}; // Must be sorted
    int value = 2;

    // Using equal_range
    auto range = std::equal_range(nums.begin(), nums.end(), value);

    // Output the range
    std::cout << "Range of value " << value << ": ";
    std::cout << "[" << (range.first - nums.begin()) << ", " << (range.second - nums.begin()) << ")" << std::endl;

    // Printing the actual elements in the range
    for (auto it = range.first; it != range.second; ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}
