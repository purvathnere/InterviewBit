int Solution::numSetBits(unsigned int A) {
int count=0;
    while(A){
        if((A&1) == 1){
            count++;
        }
        A>>=1;
    }
    return count;
}
