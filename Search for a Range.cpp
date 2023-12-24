vector<int> Solution::searchRange(const vector<int> &A, int B) {
int lo=lower_bound(A.begin(),A.end(),B)-A.begin();
if(lo==A.size()||A[lo]!=B)
return {-1,-1};
int hi=upper_bound(A.begin(),A.end(),B)-A.begin();
return {lo,hi-1};
}
