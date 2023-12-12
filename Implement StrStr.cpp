int Solution::strStr(const string A, const string B) {
   
    int n=A.size();
    int m=B.size();
    for( int i=0;i<n;i++){
        string check=A.substr(i,m);
        if(check==B)return i;
    }
    return -1;
}
