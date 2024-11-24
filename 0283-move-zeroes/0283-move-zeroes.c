void moveZeroes(int* nums, int numsSize) {
    int nonzeroindex = 0;
    
    // iterate through the list,
    for (int i = 0 ; i < numsSize; i++) {
        // if a number is not zero, replace the last known non-zero index with it
        if (nums[i] != 0) {
            nums[nonzeroindex] = nums[i];
            nonzeroindex++;
        }
    }

    // numsSize - nonzeroindex = number of zeros to append to list & starting where
    for (int i = nonzeroindex; i < numsSize; i++) {
        nums[i] = 0;
    }
}
