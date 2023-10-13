int Solution::solve(int A, int B) {
    int c = ceil(log2(B));
    if(c<=A) return c;
    int dp[A+3][B+3];
    memset(dp, 0, sizeof dp);
    for(int i=1;i<=B;i++) dp[1][i] = i;
    for(int i=1;i<=B;i++) {
        int l = 1, r = B - 1;
        while(l<=r) {
            int mid = (l+r)/2;
            int sum = (mid*(mid+1))/2;
            if(sum < i) l = mid+1;
            else r = mid-1;
        }
        dp[2][i] = l;
    }
    for(int i=3;i<=A;i++) {
        for(int j=1;j<=B;j++) {
            int mid = j/2;
            int a1 = max(dp[i-1][mid], dp[i][j-mid]);
            dp[i][j] = a1;
        }
    }
    return dp[A][B];
}
