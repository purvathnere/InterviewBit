int dp[1005][1005];

int func(vector<int> &nums , int l , int r , vector<int> &psum)
{
    if(l>=r)
    {
        return 0;
    }
   
    if(dp[l][r]!=-1)
    {
        return dp[l][r];
    }
   
    int cost=INT_MAX;
   
    for(int i=l+1;i<=r;i++)
    {
      
        int left_val;
        if(l!=0)
         left_val=psum[i-1] - psum[l-1];
        else
        left_val=psum[i-1];
       
        int right_val = psum[r]-psum[i-1];
       
        cost=min(cost , left_val + right_val + func(nums , l , i-1 , psum) + func(nums , i, r , psum) );
       
    }
   
    return dp[l][r]=cost;
}

int Solution::solve(vector<int> &nums) {
   
    int n=nums.size();
   
   
   
    vector<int> psum(n , 0);
   
    psum[0]=nums[0];
   
    for(int i=1;i<n;i++)
    {
        psum[i]=psum[i-1]+nums[i];
    }
   
    memset(dp , -1 , sizeof(dp));
   
    return func(nums , 0 , n-1 , psum);
   
   
}
