string Solution::getPermutation(int n, int k) {
    vector<int> nums(n);
    for(int i = 0; i<n; i++) nums[i] = i+1;
   
    vector<int>fact(n,  INT_MAX);
    fact[0] = 1;
    for(int i = 1; i<min(n,12); i++) fact[i] = i*fact[i-1];
   
    string ans;
    k--;
    while(n--){
        int idx = k/fact[n];
        k %= fact[n];
        ans += to_string(nums[idx]);
        nums.erase(begin(nums)+idx);
    }
   
    return ans;
}

