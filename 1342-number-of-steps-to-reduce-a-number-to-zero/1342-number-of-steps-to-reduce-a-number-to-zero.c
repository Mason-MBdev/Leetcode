int numberOfSteps(int num) {
    
    // Init counter
    int step_counter = 0;
    
    // While not zero
    while (num != 0) {
        
        // if divisible by 2 (even)
        if (num % 2 == 0) {
            num /= 2;
        }
        
        // Only case left is odd
        else {
            num -= 1;
        }
        
        // Incr counter
        step_counter += 1;
    }
    
    //return when 0 and while loop is exit
    return step_counter;
}