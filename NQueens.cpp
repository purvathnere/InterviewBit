public class Solution {
    public static ArrayList<ArrayList<String>> solveNQueens(int a) {
        ArrayList<ArrayList<String>> sol=new ArrayList<>();
        int ar[]=new int[a];
        helper(a,ar,0,sol);
        return sol;
    }
    private static void helper(int a, int[] ar, int it,ArrayList<ArrayList<String>> sol ) {
        if(it>=a)
        {
            ArrayList<String> temp=new ArrayList<>();
            for(int i=0;i<a;i++)
            {
                String str="";
                for(int j=0;j<a;j++)
                {
                    if(j==ar[i])
                    str+="Q";
                    else
                    str+=".";
                }
                temp.add(str);
            }
            sol.add(new ArrayList<>(temp));
            return;
        }
        for(int i=0;i<a;i++)
        {
            if(isInCheck(ar,i,it))
            {
                ar[it]=i; //backtracking, by replacing with newer value
                helper(a, ar, it+1, sol);
            }
        }
    }
    private static boolean isInCheck(int[] ar, int n,int it) {
        for(int i=it-1;i>=0;i--)
        {
            if(n==ar[i])
            return false;
        }
        int c=1;
        for(int i=it-1;i>=0;i--)
        {
            if(n-c<0)
            break;
            if(n-c==ar[i])
            return false;
            c++;
        }
        c=1;
        for(int i=it-1;i>=0;i--)
        {
            if(n+c>=ar.length)
            break;
            if(n+c==ar[i])
            return false;
            c++;
        }
        return true;
    }
