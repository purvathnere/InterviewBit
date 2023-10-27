void solve(vector<int>& A,vector<vector<int>>& v,vector<int>& v1,int rem,int idx){
    if(rem<0){
        return;
    }
    else if(rem==0){
        v.push_back(v1);
    }
    else{
        for(int i=idx;i<A.size();i++){
            v1.push_back(A[i]);
            solve(A,v,v1,rem-A[i],i);
            v1.pop_back();
             }
    }

}
vector<vector<int> > Solution::combinationSum(vector<int> &A, int B) {
    sort(A.begin(),A.end());
    vector<vector<int>> v;
    vector<int> v1;
    solve(A,v,v1,B,0);
    // vector<vector<int>>::iterator it;
    // it = unique (v.begin(), v.end());
    // v.resize(distance(v.begin(),it));
    // sort(v.begin(),v.end());
    map<vector<int>,int> mp;
    for(int i=0;i<v.size();i++){
        mp[v[i]]++;
    }
    vector<vector<int>> vv;
    for(auto it:mp){
                vv.push_back(it.first);
    }
    return vv;
}
