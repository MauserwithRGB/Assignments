int removeElement(int* nums, int numsSize, int val) {
    
    // 'k' is the "write pointer". It tracks the index where the
    // next *non-val* element should be placed.
    // It also counts the number of non-val elements.
    int k = 0; 
    
    // 'i' is the "read pointer". It iterates through the entire array.
    for (int i = 0; i < numsSize; i++) {
        
        // If the current element is *not* the value to remove...
        if (nums[i] != val) {
            // ...we keep it by placing it at the 'k' index.
            nums[k] = nums[i];
            
            // Move the 'k' pointer to the next empty slot.
            k++;
        }
        // If nums[i] == val, we simply let 'i' increment,
        // effectively ignoring this element and letting it
        // be overwritten later if needed.
    }
    
    // 'k' now holds the total count of elements not equal to val.
    return k;
}
