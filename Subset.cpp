void find(vector<int>& A,vector<vector<int>> &ans,vector<int> & temp,int indx){
   
    if(indx == A.size()){
        ans.push_back(temp);
        return;
    }
    // exclude
    find(A,ans,temp,indx+1);
    // include
    temp.push_back(A[indx]);
    find(A,ans,temp,indx+1);
    temp.pop_back();
   
}

vector<vector<int> > Solution::subsets(vector<int> &A) {
    sort(A.begin(),A.end());
    vector<vector<int>> ans;
    vector<int> temp;
    int indx=0;
    find(A,ans,temp,indx);
    sort(ans.begin(),ans.end());
    return ans;
}
