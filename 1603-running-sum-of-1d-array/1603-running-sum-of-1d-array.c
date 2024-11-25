/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize){
    
    // setting size of array
    *returnSize = numsSize;
    
    // take i-th element of num and add i-1
    for (int i = 1 ; i < numsSize ; i++){
        nums[i] += nums[i-1];
    }
    
    returnSize = nums;
    
    return returnSize;
}