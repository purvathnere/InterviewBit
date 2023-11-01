int Solution::firstMissingPositive(vector<int> &A) {
    for (int i = 0; i < A.size(); i++)
    {
        while ((A[i] > 0 && A[i] <= A.size()) && (i + 1 != A[i]))
        {
            int tmp = A[A[i] - 1];
            if (tmp == A[i])
            {
                break;
            }
            A[A[i] - 1] = A[i];
            A[i] = tmp;
        }
    }
    for (int i = 0; i < A.size(); i++)
    {
        if (A[i] <= 0 || A[i] != i + 1)
        {
            return i + 1;
        }
    }
    return A.size() + 1;
}

