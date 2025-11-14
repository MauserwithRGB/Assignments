#include <stdbool.h> // Required for bool type
#include <string.h> // Required for strlen()
#include <stdlib.h> // Required for malloc() and free()

bool isValid(char* s) {
    int len = strlen(s);

    // 1. An odd-length string can never be valid.
    if (len % 2 != 0) {
        return false;
    }

    // 2. Create a stack.
    // In the worst case "((((...", the stack holds len/2 items.
    // We'll allocate 'len + 1' for simplicity and safety.
    char* stack = (char*)malloc(len + 1);
    int top = 0; // 'top' will point to the *next empty slot* in the stack.

    // 3. Iterate through the string
    for (int i = 0; i < len; i++) {
        char c = s[i];

        if (c == '(') {
            stack[top++] = ')'; // Push the expected closing bracket
        } else if (c == '[') {
            stack[top++] = ']';
        } else if (c == '{') {
            stack[top++] = '}';
        } else {
            // This is a closing bracket
            
            // Check for two error conditions:
            // 1. Stack is empty (e.g., "}")
            // 2. Mismatch (e.g., "(]")
            if (top == 0 || stack[top - 1] != c) {
                free(stack);
                return false;
            }
            
            // It's a match! Pop the stack.
            top--;
        }
    }

    // 4. After the loop, the stack must be empty for the string to be valid.
    // If top == 0, it's valid. Otherwise (e.g., "(()"), it's invalid.
    bool result = (top == 0);
    free(stack); // Always free allocated memory
    return result;
}
