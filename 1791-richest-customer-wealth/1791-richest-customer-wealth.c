int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    
    // Init max wealth
    int max_monies = 0;
    
    // Traverse all i customers
    for (int i = 0 ; i < accountsSize ; i++){
        int monies = 0;
        
        // Calculate i-th customer balance accross all associated j banks
        for (int j = 0 ; j < *accountsColSize ; j++){
            monies += accounts[i][j];
        }
        
        // Check if greater than previous wealthy customer
        if (monies > max_monies){
            max_monies = monies;
        }
    }
    return max_monies;
}