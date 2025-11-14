#include <string.h> // For strlen()

/**
 * Helper function to get the integer value of a single Roman numeral character.
 */
int getValue(char r) {
    switch(r) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default:  return 0; // Should not happen based on constraints
    }
}

/**
 * Converts a Roman numeral string to an integer.
 */
int romanToInt(char* s) {
    int total = 0;
    int prevValue = 0;
    int len = strlen(s);

    // Iterate backwards (from right to left)
    for (int i = len - 1; i >= 0; i--) {
        // Get the value of the current character
        int currentValue = getValue(s[i]);

        // Compare with the value of the character to its right (prevValue)
        if (currentValue < prevValue) {
            // Subtraction case (e.g., 'I' in "IV")
            total -= currentValue;
        } else {
            // Addition case (e.g., 'V' in "VI" or "IV")
            total += currentValue;
        }
        
        // Update the previous value for the next iteration
        prevValue = currentValue;
    }
    
    return total;
}
