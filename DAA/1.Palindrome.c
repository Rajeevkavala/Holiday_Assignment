#include <stdbool.h>
#include <limits.h>  // For INT_MAX and INT_MIN

bool isPalindrome(int x) {
    // If the number is negative or ends with 0 but is not 0 itself, it's not a palindrome
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int reversed = 0;

    // Reverse the number while checking for overflow
    while (x > reversed) {
        // Check for overflow: if reversed > INT_MAX / 10, it's about to overflow
        if (reversed > INT_MAX / 10) {
            return false;  // Overflow detected, so the number cannot be a palindrome
        }
        
        reversed = reversed * 10 + x % 10;
        x /= 10;
    }

    // For numbers with an even length, reversed should be equal to x.
    // For numbers with an odd length, reversed / 10 will remove the middle digit.
    return x == reversed || x == reversed / 10;
}
