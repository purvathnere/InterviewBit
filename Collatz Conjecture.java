public class Solution {
    public long solve(int A, int B) {
        long a = A;
        for(int i = 1; i < B; i++){
            if(a % 2 == 0){
                a = a/2;
            }else{
                a = 3*a+1;
            }
        }
        return a;
    }
}
