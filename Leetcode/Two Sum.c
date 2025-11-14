#include <stdlib.h> // Required for malloc

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    
    // Use a nested loop to check every pair
    // Outer loop 'i' goes from the start to the end
    for (int i = 0; i < numsSize; i++) {
        // Inner loop 'j' starts *after* 'i' to avoid using the same element twice
        for (int j = i + 1; j < numsSize; j++) {
            
            // Check if the two numbers add up to the target
            if (nums[i] + nums[j] == target) {
                // Solution found!
                
                // 1. Set the size of the returned array (it's always 2)
                *returnSize = 2;
                
                // 2. Allocate memory for the 2 integers we will return
                int* result = (int*)malloc(2 * sizeof(int));
                
                // 3. Store the indices
                result[0] = i;
                result[1] = j;
                
                // 4. Return the new array
                return result;
            }
        }
    }
    
    // Per the constraints, a solution always exists,
    // but in a real-world scenario, we'd handle the "not found" case.
    *returnSize = 0;
    return NULL;
}
