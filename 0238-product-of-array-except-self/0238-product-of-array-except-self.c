int* productExceptSelf(int* nums, int numsSize, int* returnSize) {

    int* output = (int*)malloc(numsSize * sizeof(int));
    *returnSize = numsSize;

    // calculate left product and store in array (each element is a product of all elements to the left)
    output[0] = 1;
    for (int i = 1; i < numsSize; i++) {
        output[i] = output[i - 1] * nums[i - 1];
    }

    // calculate right product and update output array (each element gets added products from the right)
    int rightProduct = 1;
    for (int i = numsSize - 2; i >= 0; i--) {
        rightProduct *= nums[i + 1];
        output[i] *= rightProduct;
    }

    return output;
}
