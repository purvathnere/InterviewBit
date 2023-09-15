public class Solution{
    public int[] solve(int[] A)
    {
        int n=A.length-1;
        int j=0;
        for(int i=0;i<=n;i++)
        {
            if(A[i]!=0)
            {
                int temp=A[i];
                A[i]=A[j];
                A[j]=temp;
                j++;
            }
        }
        return A;
    }
}
