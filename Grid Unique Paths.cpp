int paths(int i, int j, int A, int B, vector<vector<int>> &dp){
    if(i == A-1 && j == B-1){
        return 1;
    }
    if(i >= A || j >= B){
        return 0;
    }
    if(dp[i][j] != -1){
        return dp[i][j];
    }
    else{
        // updating the dp Hash table while returning...
        // Done because to avoid uneccessary recursion calls
        return dp[i][j] = paths(i+1,j,A,B,dp) + paths(i,j+1,A,B,dp);
    }
}
int Solution::uniquePaths(int A, int B) {
    // Initialising the dp Hash table with -1 //
    vector<vector<int>> dp(A,vector<int>(B,-1));
    int result = paths(0,0,A,B,dp);
    return result;
}
