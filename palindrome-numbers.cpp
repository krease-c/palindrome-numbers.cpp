#include <iostream>
using namespace std;

// Function to check if a number is a palindrome
bool isPalindrome(int x) {
    // Negative numbers and numbers ending in 0 (except 0 itself) cannot be palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int originalNumber = x;
    int reversedNumber = 0;

    // Reverse the number
    while (x > 0) {
        int digit = x % 10;
        reversedNumber = reversedNumber * 10 + digit;
        x /= 10;
    }

    // Check if the original number and reversed number are the same
    return originalNumber == reversedNumber;
}

int main() {
    int number;

    // Input a number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Check if the number is a palindrome
    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}

