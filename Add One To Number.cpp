vector<int> Solution::plusOne(vector<int> &A) {
    vector<int> b;
    int i = A.size()-1;
    A[i] +=1;
    while(A[i]>9 && i>0){
     A[i] = 0;
     i--;
     A[i]+=1;  
    }
    int f = 0;
    for (int i = 0; i <A.size(); i++){
        if (A[i]!= 0) f=1;
        if (A[i]> 9 && f==1){
            b.push_back(1);
            b.push_back(0);
        }
        else if (f==1){
            b.push_back(A[i]);
        }  
    }
    return b;
   
}
