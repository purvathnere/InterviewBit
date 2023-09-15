vector<int>Solution::solve(string A)
{
int freq[26]={0};
for(int i=0;i<A.length();i++)
{
    int n=A[i]-'a';
    freq[n]++;
} 
vector<int> result(freq,freq+26);
return result;   
}
