#include <iostream>
#include <vector>

void swapAlternate(std::vector<int>& arr) {
    for (int i = 0; i < arr.size() - 1; i += 2) {
        std::swap(arr[i], arr[i + 1]);
    }
}

int main() {
    std::vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8};
    swapAlternate(arr);
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}