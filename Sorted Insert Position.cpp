
int Solution::searchInsert(vector<int> &A, int B) {

   
    int low=0;
    int high=A.size();
    int ans=-1;
    while(low<=high){
        int mid=(low+high)/2;
       
        if(A[mid]>=B){
            ans=mid;
            high=mid-1;
        }else{
            low=mid+1;
        }
    }
   
    return ans;
