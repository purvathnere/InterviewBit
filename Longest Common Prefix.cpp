string Solution::longestCommonPrefix(vector<string> &A) {
    string ans,cur;
    ans=A[0];
    for(int i=1;i<A.size();i++)
    {
        int limit =min(ans.size(),A[i].size()),j=0;
        cur=A[i];
        while(j<limit)
        {
            if(ans[j]!=cur[j]){
                break;
            }
            j++;
        }
        ans=ans.substr(0,j);
    }
    return ans;
}
