// #include <iostream>
// using namespace std;

// int countDigits(int n) {
//     if (n < 10) {
//         return 1;
//     }
    
//     return 1 + countDigits(n / 10);
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
    
//     int digitCount = countDigits(number);
//     cout << "Number of digits: " << digitCount << endl;
    
//     return 0;
// }


// 2nd

// #include <iostream>
// using namespace std;

// // Recursive function to calculate factorial
// int factorial(int n) {
//     // Base case: Factorial of 0 is 1
//     if (n == 0) {
//         return 1;
//     }
    
//     // Recursive case: n! = n * (n-1)!
//     return n * factorial(n - 1);
// }

// int main() {
//     int number;
//     cout << "Enter a number: ";
//     cin >> number;
    
//     if (number < 0) {
//         cout << "Factorial is undefined for negative numbers." << endl;
//     } else {
//         int result = factorial(number);
//         cout << "Factorial of " << number << " is " << result << endl;
//     }
    
//     return 0;
// }


// 3rd
#include <iostream>
using namespace std;

// Function to reverse a number using recursion
int reverseNumber(int num, int reversedNum = 0) {
    // Base case: When the original number becomes 0
    if (num == 0) {
        return reversedNum;
    }
    
    // Extract the last digit of the number
    int lastDigit = num % 10;
    
    // Add the last digit to the reversed number
    reversedNum = reversedNum * 10 + lastDigit;
    
    // Recursive call to process the rest of the number
    return reverseNumber(num / 10, reversedNum);
}

// Function to check if a number is a palindrome
bool isPalindrome(int num) {
    int reversedNum = reverseNumber(num);
    return num == reversedNum;
}

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPalindrome(number)) {
        cout << number << " is a palindrome." << endl;
    } else {
        cout << number << " is not a palindrome." << endl;
    }

    return 0;
}
