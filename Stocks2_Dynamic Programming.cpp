int Solution::maxProfit(const vector<int> &A) {
    int profit = 0;
    int n = A.size();
    for(int i=1;i<n;i++)
    {
        if(A[i]>A[i-1])
        {
            profit+=A[i]-A[i-1];
        }
        
    }
    return profit;
}
