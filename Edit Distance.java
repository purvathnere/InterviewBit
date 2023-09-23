public class Solution {
    public int minDistance(String A, String B) {
    int m = A.length();
    int n = B.length();
    int[][] dp = new int[m+1][n+1];
   
   
    for(int i =0; i<=m; i++){
        for(int j = 0; j<=n; j++){
            if(i == 0) dp[i][j] =j;
            else if(j == 0) dp[i][j] =i;
            else {
                //if elements are the same, then value in matrix doesnt change
                if(A.charAt(i-1) == B.charAt(j-1)){
                    dp[i][j] = dp[i-1][j-1];
                } else{  //if elements are matching then do these,1.deletion(m-1) 2.insertion(n-1) 3.replacment(n,m)
                    dp[i][j] = 1+ Math.min(Math.min(dp[i-1][j], dp[i][j-1]),dp[i-1][j-1]);
                }
            }
        }
    }
      return dp[m][n];
    }
}
