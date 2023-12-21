int Solution::singleNumber(const vector<int> &A) {
      int ans=0;
    for(int i=0;i<32;i++)
    {
        int cnt=0;
        for(int j=0;j<A.size();j++)
        {
            if((A[j]>>i)&1)
            {
                cnt++;
            }
        }
        if(cnt%3==1)
        {
            ans=ans+(1<<i);
        }
    }
    return ans;
}
