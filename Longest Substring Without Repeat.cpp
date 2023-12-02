int Solution::lengthOfLongestSubstring(string A) {
unordered_map<char,int>mp;
int maxlen=1;
int j=0;

for(int i=0;i<A.length();i++){
    mp[A[i]]++;
    while(mp[A[i]]>1){
            mp[A[j]]--;
            j++;
    }
    maxlen=max(maxlen,i-j+1);  
}
return maxlen;
}

