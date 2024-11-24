char* reverseVowels(char* s) {

    // copy string to a new string, and get length
    char* str = s;
    int len = strlen(s);
    // start 2 pointers at either end of the string
    int i = 0;
    int j = len - 1;

    // while the 2 pointers don't cross
    while (i < j) {
        // move the first pointer to the first vowel from the left
        while (i < j && !strchr("aeiouAEIOU", str[i])) {
            i++;
        }
        // move the second pointer to the first vowel from the right
        while (i < j && !strchr("aeiouAEIOU", str[j])) {
            j--;
        }
        // if the 2 pointers aren't currently on the same element, swap the vowels
        if (i < j) {
            char temp = str[i];
            str[i] = str[j];
            str[j] = temp;
            i++;
            j--;
        }
    }

    return str;
}