bool solve(string A, string B, string C, int a, int b, int c){
    if(c == C.length()) return 1;
    if(a < A.length() && b < B.length() && A[a] == C[c] && B[b] == C[c]){
        return solve(A, B, C, a+1, b, c+1) || solve(A, B, C, a, b+1, c+1);
    }
    else if(a < A.length() && A[a] == C[c]){
        return solve(A, B, C, a+1, b, c+1);
    }
    else if(b < B.length() && B[b] == C[c]){
        return solve(A, B, C, a, b+1, c+1);
    }
    else return 0;
   
   
}
int Solution::isInterleave(string A, string B, string C) {
    int n1 = A.length();
    int n2 = B.length();
    int n3 = C.length();
    if(n1 + n2 != n3) return 0;
    return solve(A, B, C, 0, 0, 0);
}
