bool checkPalindrome(string str){
    int i = 0;
    int j = str.size()-1;
    while(i<j){
        if (str[i] != str[j]) return false;
        i++;
        j--;
    }
    return true;
}

int Solution::minCut(string A) {
    int n =A.size();
    vector<int> dp(n,1e9);
    dp[0] = 0;
    for(int i=1;i<n;i++){
        for(int j = i;j>=0;j--){
            int len = i-j+1;
            string substring = A.substr(j,len);
            if (checkPalindrome(substring)){
                int lines = 0;
                if (j>0){
                    lines = 1+dp[j-1];
                }
                dp[i] = min(dp[i], lines);
            }
        }
    }
    return dp[n-1];
}
