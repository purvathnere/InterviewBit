
int Solution::findMin(const vector<int> &A) {

    int low = 0, high = A.size()-1;

    

    while(low <= high)

    {

        int mid = (low + high)/2;

        

        if((mid == 0 || A[mid] < A[mid-1]) && (mid == A.size()-1 || A[mid] < A[mid+1]))

            return A[mid];

            

        else if(A[mid] > A[high])  low = mid+1;

        

        else high = mid-1;

    }

    return -1; 

}




