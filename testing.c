/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {

    // Very confusing looking, had to search this one up
    char **arr = (char **)malloc(n * sizeof(char *));
    
    for (int i = 0 ; i <= n ; i++) {
        char* word;
        if ((i+1) % 3 == 0 && (i+1) % 5==0) {
            strcpy(arr[i], "FizzBuzz");
        }

        else if ((i+1) % 3 == 0) {
            strcpy(arr[i], "Fizz");
        }

        else if ((i+1) % 5 == 0) {
            strcpy(arr[i], "Buzz");
        }

        else {
            word == i;
        } 
    } 
    
    // return array
    return arr;
}