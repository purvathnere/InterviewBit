public class Solution{
    public int solve(int[]A , int[]B,int C)
    {
        int Acnt =0;
        int Bcnt=0;
        for(int i=0;i<A.length;i++)
        {
          if(A[i]>C)
          
              Acnt++;
           
        }
        for(int i=0;i<B.length;i++)
        {
            if(B[i]<C)
            Bcnt++;
        }
        return Math.max(Acnt,Bcnt);
    }
}
