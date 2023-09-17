
int Solution::jump(vector<int> &A) {

    int farthest=0;

    int current=0;

    int jumps=0;

    for(int i=0;i<A.size()-1;i++)

    {

        farthest=max(farthest,A[i]+i);

        if(current==i)

        {

            current=farthest;

            jumps++;

        }

    }

    if(current>=A.size()-1) return jumps;

    else return -1;

    

}
