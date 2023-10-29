void f(vector<int> &A,set<vector<int>> &ans, vector<int> &v,int i)
{
    if(i==A.size())
    {
        ans.insert(v);
        return;
    }
    for(int j=i;j<A.size();j++)
    {
        swap(v[i],v[j]);
        f(A,ans,v,i+1);
        swap(v[i],v[j]);
    }
}

vector<vector<int> > Solution::permute(vector<int> &A)
{
    set<vector<int>> ans;
    vector<int> v=A;
    f(A,ans,v,0);
    vector<vector<int>>sol(ans.begin(),ans.end());
    return sol;
}
