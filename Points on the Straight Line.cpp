int Solution::maxPoints(vector<int> &A, vector<int> &B) {
     
       
         
        unordered_map< double , int > mp;
       
        int n=A.size();
       
        if(n<=2)
        {
            return n;
        }
       
        int ans=0;
       
        for(int i=0;i<n;i++)
        {
            unordered_map< double , int > mp;
            for(int j=0;j<n;j++)
            {
                if(j!=i)
                {
                   
                   
                    double x_diff=(A[i]-A[j]);
                    double y_diff=(B[i]-B[j]);
                   
                    double slope=(double)INT_MAX;
                   
                    if(x_diff!=0)
                    {
                        slope = (double) y_diff/x_diff ;
                    }
                   
                    if(mp.find((double)slope)==mp.end())
                    {
                        mp[slope]=2;
                    }
                    else
                    {
                        mp[slope]++;
                    }
                   
                    ans=max(ans , mp[slope]);
                }
            }
        }
       
        return ans;
     
}
