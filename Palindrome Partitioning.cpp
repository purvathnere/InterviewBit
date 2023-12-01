bool isPalindrome(string s)
{
int n=s.size();
for(int i=0;i<n;i++)
{
if(s[i]!=s[n-1-i])return false;
}
return true;
}

void recurse(vector<vector<string>> &ans,vector<string> row,string &A,int index)
{
if(index==A.size())
{
ans.push_back(row);
return;
}
string s="";
for(int i=index;i<A.size();i++)
{
s+=A[i];
if(isPalindrome(s))
{
row.push_back(s);
recurse(ans,row,A,i+1);
row.pop_back();
}
}
}
vector<vector<string> > Solution::partition(string A) {

vector<vector<string> > ans;
vector<string> curr;
recurse(ans,curr,A,0);
return ans;
}

