#include <iostream>
#include <string>
using namespace std;

bool isBalancedNumber(int N) {
    string num = to_string(N);
    int mid = num.length() / 2;
    int leftSum = 0, rightSum = 0;
    for (int i = 0; i < mid; i++) {
        leftSum += num[i] - '0'; // Convert char to int
    }
    for (int i = mid + 1; i < num.length(); i++) {
        rightSum += num[i] - '0'; 
    }
    return leftSum == rightSum;
}

int main() {
    int N;
    
    
    cout << "Enter an odd-digit number: ";
    cin >> N;
    
    if (isBalancedNumber(N)) {
        cout << "The number " << N << " is a balanced number." << endl;
    } else {
        cout << "The number " << N << " is not a balanced number." << endl;
    }
    
    return 0;
}
