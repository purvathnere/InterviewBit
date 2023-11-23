int Solution::longestConsecutive(const vector<int> &A) {
    unordered_map<int,bool> mp;
    int n = A.size();
    for(int i = 0; i<n; i++)
    {
        mp[A[i]] = 1;
    }
    for(auto it : mp)
    {
        if(mp.find(it.first-1) != mp.end()) mp[it.first] = 0;
    }
    int mxl = 1;
    int st = -1;
    int omx = 0;
    for(auto it : mp)
    {
        if(it.second == 1)
        {
            int tl = 1;
            st = it.first;
            mxl = 1;
            while(mp.find(it.first +tl) != mp.end())
            {
                mxl++;
                tl++;
            }
        }
        omx = max(mxl,omx);
    }
    return omx;
}

