string Solution::solve(string s)
{
string ans = "";
stringstream ss(s);
string token = "";
while(getline(ss, token, ' '))
{
if(token != "")
ans = token + " " + ans;
}
int size = ans.size();
string finalString = ans.substr(0, size-1);
return finalString;
}
