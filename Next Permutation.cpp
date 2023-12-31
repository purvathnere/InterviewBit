vector<int> Solution::nextPermutation(vector<int> &A) {
int n=A.size();
int pos=-1;
for(int i=n-2;i>=0;i--){
if(A[i]<A[i+1]){
pos=i;
break;
}
}
if(pos==-1){
sort(A.begin(),A.end());
return A;
}
int pos2=pos+1;
for(int i=pos+1;i<n;i++){
if(A[i]-A[pos]>=1 && A[i]<A[pos2])
pos2=i;
}
swap(A[pos],A[pos2]);
sort(A.begin()+pos+1,A.end());
return A;
}


