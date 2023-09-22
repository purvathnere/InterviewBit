int Solution::canJump(vector<int> &A) {

    int n=A.size();

    int lastRechable=n-1;

    

    for(int i=n-1;i>=0;i--){

        if(i+A[i] >= lastRechable){

            lastRechable=i;

        }

    }

    

    if(lastRechable==0) return 1;

    else return 0;

}
