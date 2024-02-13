/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    
    // setting both starting values to the same
    *returnSize = numsSize;
    
    // take i-th element of return & add num, place in returnsize i+1
    for (int i = 1 ; i < numsSize ; i++){
        nums[i] += nums[i-1];
    }
    
    return nums;
}