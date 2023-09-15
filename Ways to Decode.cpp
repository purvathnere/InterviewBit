#include<string>


int mod=1e9+7;


int decode(string &s, int i,vector<int> &dp)

{

    if(i>=s.size()) //Decoded entire string 

    return 1;

    

    if(i==s.size()-1) //At last element only check if its zero or not because zero has no code

    return (s[i]-'0')>0;

    

    if(dp[i]!=-1)

    return dp[i];

    

    //We take 2 cases:

    //Either take element at ith index as a single value

    //Or take 2 consecutive elements starting at ith index

    string temp1="";

    string temp2="";

    int take1=0;

    int take2=0;

    

    temp1+=s[i];

    if(s[i]-'0'>0) //Single element should not be zero

    take1=decode(s,i+1,dp);

        

    if(i<s.size()-1)

    {

        temp2+=s[i];

        temp2+=s[i+1]; // tens digit number == s[i] should be greater than zero otherwise would give TLE

        if(s[i]-'0'>0 && stoi(temp2)<=26)

        take2=decode(s,i+2,dp);

    }

    

    

    return dp[i]=(take1+take2)%mod;

    

}



int Solution::numDecodings(string s) {

    vector<int> dp(s.size(),-1);

    return decode(s, 0,dp)%mod;

}

