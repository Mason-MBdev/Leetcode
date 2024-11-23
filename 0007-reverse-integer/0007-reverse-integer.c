int reverse(int x) {
    int reversed = 0;
    
    while (x != 0) {
        // extracting the last digit
        int digit = x % 10;

        // Check for overflow and underflow before updating reversed
        if (reversed > INT_MAX / 10 || (reversed == INT_MAX / 10 && digit > 7)) {
            return 0;
        }
        if (reversed < INT_MIN / 10 || (reversed == INT_MIN / 10 && digit < -8)) {
            return 0;
        }

        // shifting 'reversed' digits to the left (multiplying by 10) and adding the extracted digit in the smallest column
        reversed = reversed * 10 + digit;

        // removing the last digit
        x /= 10;
    }
    return reversed;
}