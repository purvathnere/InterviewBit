#include<string>
string Solution::findDigitsInBinary(int A) {
    if(A==0) return "0";
    string res;
    while(A>=1){
        A%2==1?res.push_back('1') : res.push_back('0');
        A/=2;
    }
    return string(res.rbegin(),res.rend());
}
