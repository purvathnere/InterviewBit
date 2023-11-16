void Solution::sortColors(vector<int> &A) {
int i=-1;
int n = A.size();
for(int j=0; j<n; j++){
if(A[j]==0){
i++;
swap(A[i],A[j]);
}
}
for(int j=i+1; j<n; j++){
if(A[j]==1){
i++;
swap(A[i],A[j]);
}
}
return;
}

