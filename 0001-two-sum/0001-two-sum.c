/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // malloc array size 2 & handle failure
    int *arr = (int *)malloc(2 * sizeof(int));
    // 
    if (!arr) {
        *returnSize = 0;
        return NULL;
    }

    // N * N, for all i numbers check if all j numbers summed add to targets
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                arr[0] = i;
                arr[1] = j;
                *returnSize = 2;
                return arr;
            }
        }
    }
    // return empty array if no solution found
    *returnSize = 0;
    free(arr);
    return NULL;
}
