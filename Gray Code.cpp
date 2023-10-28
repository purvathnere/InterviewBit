void solve(int bit, vector<int> &ans, int& cur) {
    if(bit < 0) {
        ans.push_back(cur);
        return;
    }
    solve(bit-1, ans, cur);
    cur ^= (1 << bit); // flip this bit
    solve(bit-1, ans, cur);
}

vector<int> Solution::grayCode(int A) {
    vector<int> ans;
    int cur = 0;
    solve(A-1, ans, cur);
    return ans;
}
