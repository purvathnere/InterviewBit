public class Solution {
    public int solve(int[] A, int B) {
        int n = A.length;
        int sum =0;
        int i , j = n-1;
        for( i=0; i<B ; i++)
        {
            sum+=A[i];
        }
        i--;
        int ans = sum;
        for(j=n-1 ; j>n-1-B ; j-- )
        {
            sum = sum - A[i--] + A[j];
            ans = Math.max(ans, sum);
        }
        return ans;
    }
}
