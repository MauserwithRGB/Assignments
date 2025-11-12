#include <stdbool.h>

/**
 * Checks if an integer is a palindrome.
 *
 * @param x The integer to check.
 * @return true if x is a palindrome, false otherwise.
 */
bool isPalindrome(int x) {
    
    // 1. Handle edge cases
    // A negative number is never a palindrome.
    // A number ending in 0 (but isn't 0) is never a palindrome.
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    int revertedHalf = 0;

    // 2. Loop until we've processed half the number
    //    The loop stops when x is no longer larger than the reverted part.
    while (x > revertedHalf) {
        // "Push" the last digit of x onto revertedHalf
        revertedHalf = (revertedHalf * 10) + (x % 10);
        // "Pop" the last digit from x
        x = x / 10;
    }

    // 3. Compare the two halves
    //
    // For an even length (e.g., 1221):
    //    Loop stops when x = 12, revertedHalf = 12
    //    We check: (12 == 12)
    //
    // For an odd length (e.g., 121):
    //    Loop stops when x = 1, revertedHalf = 12
    //    The middle digit (2) is on revertedHalf. We remove it.
    //    We check: (1 == 12 / 10) -> (1 == 1)
    //
    return (x == revertedHalf) || (x == revertedHalf / 10);
}
