void generate(int ctStart, int pendingStart, int ctEnd, string temp, int A, vector<string>&ans){
    if(ctEnd == A and ctStart == A){
        ans.push_back(temp);
        return ;
    }
    if(ctStart != A){
        temp.push_back('(');
        generate(ctStart + 1, pendingStart+1, ctEnd, temp, A, ans);
        if(pendingStart != 0){
            temp.pop_back();
            temp.push_back(')');
            generate(ctStart, pendingStart-1, ctEnd+1,temp,  A, ans);
        }
    }else{
        if(pendingStart != 0){
            // temp.pop_back();
            temp.push_back(')');
            generate(ctStart, pendingStart-1, ctEnd+1,temp,  A, ans);
        }
    }
}
bool static cmpr(string &s1, string &s2){
    return s1 < s2;
}
vector<string> Solution::generateParenthesis(int A) {
    vector<string>ans ;
    string temp;
    int ctStart = 0, ctEnd = 0 ;
    generate(0, 0,0,   temp, A, ans);
    sort(ans.begin(), ans.end(), cmpr);
    return ans;
}


