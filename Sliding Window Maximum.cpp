#include<list>
vector<int> Solution::slidingMaximum(const vector<int> &A, int B) {
    vector<int> ans;
    list<int> l;
    int i{0},j{0};
   
    while(j < A.size()){
        while(l.size() > 0 && l.back() < A[j]){
            l.pop_back();
        }
        l.push_back(A[j]);
       
        if(j-i+1 < B){
            j++;
        }
        else{
            ans.push_back(l.front());
            if(A[i] == l.front()){
                l.pop_front();
            }
            i++;
            j++;
        }
       
    }
    return ans;
}
