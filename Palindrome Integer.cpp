int Solution::isPalindrome(int A) {
    if(A<0){
        return 0;
    }
    if(A<10){
        return 1;
    }
    long long int res=0,dup=(long long int)A;
    while(A>0){
        res=res*10+(A%10);
        A/=10;
    }
    return dup==res;
}
