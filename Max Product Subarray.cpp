int Solution::maxProduct(const vector<int> &A) {
    int c = 0;
    if(A.size()==1)return A[0];
    for(auto x:A)if(x < 0)c++;
    int mul = 1, ans = 0;
    if(c%2==0){
        for(auto x:A){
            mul*=x;
            ans = max(ans, mul);
            if(mul == 0)mul = 1;
        }
    }
    else{
        int i = 0;
        while(A[i] >= 0)i++;
        for(int j = 0; j < i; j++){
            mul *= A[j];
            ans = max(ans, mul); if(mul == 0)mul = 1;
        }
        mul = 1;
        for(int j = i+1; j < A.size(); j++){
            mul *= A[j];
            ans = max(ans, mul); if(mul == 0)mul = 1;
        }
    }return ans;
}
