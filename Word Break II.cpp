vector<string> f(int index,string A,unordered_set<string>& words){
vector<string> res;
string temp  =  "";
if(index==A.size()) {
res.push_back(temp);
return res;
}
for(int i=index;i<A.size();i++){
temp+=A[i];
if(words.find(temp)!=words.end()){
vector<string> smallAns = f(i+1,A,words);
for(string it: smallAns){
                if(it=="") res.push_back(temp);
                else res.push_back(temp+" "+it);
}
}
}
return res;
}



vector<string>Solution :: wordBreak(string A, vector<string> &B) {
unordered_set<string> words;
for(string it : B) words.insert(it);
vector<string> res =f(0,A,words);
    return res;
}
