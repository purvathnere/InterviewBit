string Solution::reverseString(string A) {
stack s;
string ans="";
for(int i=0;i<A.size();i++)
{
s.push(A[i]);
}
for(int i=0;i<A.size();i++)
{
A[i]=s.top();
s.pop();
}
return A;

}
