int Solution::divide(int A, int B) {
int s=0;
if(A<0&&B<0||(A>=0&&B>=0)){
s=1;
}else{
s=-1;
}
if(B==1)
return A;
A = A==INT_MIN ? INT_MAX : abs(A);
B = B==INT_MIN ? INT_MAX : abs(B);

long long int ans = exp(log(A) - log(B)) + 0.0000000001;
ans=(ans>INT_MAX)?INT_MAX:ans;
return ans*s;
}
