public class Solution {
    public int solve(int A, int B, int C) {
        while(A<=B && A%10!=C)A++;
        if(A>B)return 0;
        int number=(B-A)/10+1;
        return number;
    }
}
