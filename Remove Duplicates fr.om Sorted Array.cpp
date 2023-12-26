int Solution::removeDuplicates(vector<int> &A) {
    set<int> s;
    int n=A.size();
    for(int i=0;i<n;i++){
        s.insert(A[i]);
    }
    A.clear();
    for(auto it:s){
        A.push_back(it);
    }
    return A.size();
}
