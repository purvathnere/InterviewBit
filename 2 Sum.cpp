vector<int> Solution::twoSum(const vector<int> &A, int B)
{
    unordered_map<int, int> num_to_index;
    vector<int> result;
   
    for (int i = 0; i < A.size(); i++) {
        int num = A[i];
        int complement = B - num;
       
        if (num_to_index.find(complement) != num_to_index.end()) {
            result.push_back(num_to_index[complement] + 1);
            result.push_back(i + 1);
            return result;
        }
       
        if (num_to_index.find(num) == num_to_index.end()) {
            num_to_index[num] = i;
        }
    }
   
    return result;
}

