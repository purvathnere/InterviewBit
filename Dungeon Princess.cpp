
int Solution::calculateMinimumHP(vector<vector<int>> &a) {

    int n=a.size();

    int m=a[0].size();

     int l=1,r=1e9;

     int dp[n][m];

     while(l<=r)

     {

         int mid=(l+r)/2;

         dp[0][0]=mid+a[0][0]; //here mid is the value on which we are checking for the validation

         for(int i=0;i<n;i++)

         {

             for(int j=0;j<m;j++)

             {

                 if(i && !j) if(dp[i-1][j]>0) dp[i][j]=dp[i-1][j]+a[i][j]; else dp[i][j]=-1; // !j => j==0 => first column

                 if(!i && j) if(dp[i][j-1]>0) dp[i][j]=dp[i][j-1]+a[i][j]; else dp[i][j]=-1; // !i => i==0 => first row

                 if(i && j)

                 {

                     if(dp[i-1][j]<=0 && dp[i][j-1]<=0) dp[i][j]=-1;    //if both upward and leftward is less than or equal to zero this means knight has died

                     else dp[i][j]=max(dp[i-1][j],dp[i][j-1])+a[i][j]; //else it will take greedily best path

                 }

             }

         }

         if(dp[n-1][m-1]>0)r=mid-1; //if we can reach the (n-1,m-1) cell by this 'mid' value then we are checking for lesser values of l

         else l=mid+1; //if we cannot reach then we must have to increase the lower limit to (mid+1)

     }

     return l;

}


