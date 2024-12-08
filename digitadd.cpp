#include <iostream>

int addDigits(int num) {
    while (num >= 10) { // Continue until num is a single digit
        int sum = 0;
        while (num > 0) {
            sum += num % 10; // Add the last digit
            num /= 10;       // Remove the last digit
        }
        num = sum; // Update num with the sum of its digits
    }
    return num; // Return the single digit
}

int main() {
    int num = 98;
    int result = addDigits(num);
    std::cout << "The result is: " << result << std::endl; // Output: 8
    return 0;
}