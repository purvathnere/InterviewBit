vector<vector<int> > Solution::anagrams(const vector<string> &A) {
   
    int n=A.size();
    unordered_map<string,vector<int>> mp;
   
    for(int i=0;i<n;i++)
    {
        string a=A[i];
        sort(a.begin(),a.end());
        mp[a].push_back(i+1);
    }
    vector<vector<int>> ans;
    for(auto it :mp)
    {
        vector<int> res=it.second;
        ans.push_back(res);
    }
    return ans;
}
