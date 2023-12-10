vector<int> Solution::getRow(int A) {
        int i = A;
        vector<int> temp(i+1,1);
        int nc = 1;
        int u = i;
        int d = 1;
        for(int j=1;j<i;j++){
            temp[j]  = (temp[j-1] *u)/d;
            u--;
            d++;    
        }
       
        return temp;
}
