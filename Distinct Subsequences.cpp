int f(int i,int j,string &A,string &B,vector<vector<int>>&dp){
    if(j<0) return 1;
    if(i<0) return 0;
    if(dp[i][j]!=-1) return dp[i][j];
    int pick=0;
    if(A[i]==B[j]){
        pick=f(i-1,j-1,A,B,dp);
    }
    int notpick=f(i-1,j,A,B,dp);
    return dp[i][j]=pick+notpick;
}
int Solution::numDistinct(string A, string B) {
    vector<vector<int>>dp(A.size(),vector<int>(B.size(),-1));
    return f(A.size()-1,B.size()-1,A,B,dp);
}
