int findDuplicate(vector<int> &arr) {
    int ans = 0;

    // XOR ing in all elements
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ arr[i];
    }
    
    // XOR [n, n - 1]
    for(int i = 0; i < arr.size(); i++) {
        ans = ans ^ i;
    }

    return ans;
}

/*
1 2 3 5 7 5 6

ans = 1^2^3^5^7^5^6

ans = ans ^ i; -> ans = 1^2^3^5^7^5^6 ^ 1
                        2^2
                        3^3
                        5^5
                        5
*/