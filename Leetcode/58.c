#include <string.h>

int lengthOfLastWord(char* s) {
    int i = strlen(s) - 1;
    int length = 0;

    // Step 1: Skip any trailing spaces
    while (i >= 0 && s[i] == ' ') {
        i--;
    }

    // Step 2: Count characters until a space or beginning of string
    while (i >= 0 && s[i] != ' ') {
        length++;
        i--;
    }

    return length;
}
