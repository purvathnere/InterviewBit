int Solution::isPalindrome(string A) {
int n = A.size();
string temp = "";
for(int i =0;i<n;i++){
if((tolower(A[i])>='a' && tolower(A[i])<='z') || (A[i]>='0' && A[i] <= '9'))
temp+=A[i];
}
int i =0;
int j = temp.size()-1;
while(i<=j){
if(tolower(temp[i])!= tolower(temp[j]))return false;
i++;
j--;
}
return true;
}
