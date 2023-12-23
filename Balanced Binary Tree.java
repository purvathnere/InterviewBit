class Pair
{
    boolean isbalance;
    int height;
    Pair(boolean b,int h)
    {
        isbalance=b;
        height=h;
    }
}
public class Solution {
   
    Pair solve(TreeNode root)
    {
        if(root==null)
        {
            return new Pair(true,0);
        }
        Pair left = solve(root.left);
        Pair right = solve(root.right);
       
        boolean leftans = left.isbalance;
        boolean rightans = right.isbalance;
       
        int diff = Math.abs(left.height - right.height);
       
        int height = Math.max(left.height,right.height)+1;
       
        if(leftans && rightans && (diff<=1))
        {
            return new Pair(true,height);
        }
        return new Pair(false,height);
       
    }
    public int isBalanced(TreeNode A)
    {
        Pair ans = solve(A);
        if(ans.isbalance)
        return 1;
        else
        return 0;
    }
}

