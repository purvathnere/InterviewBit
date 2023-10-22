int Solution::repeatedNumber(const vector<int> &A) {
   
    int n = A.size();
    vector<int> ans(n, 0);
   
    for(int i=0; i<n; i++){
        if(ans[A[i]-1] == 0){
            ans[A[i]-1] = A[i];
        }else return A[i];
    }
    return -1;
}
