int Solution::maximumGap(const vector<int> &A)

{

    int n = A.size(), maxDist = 0, minPos = INT_MAX;

    vector<pair<int, int>> nums;

    for(int i=0; i<n; i++)

    {

        nums.emplace_back(make_pair(A[i], i));

    }

    

    sort(nums.begin(), nums.end());

    minPos = nums[0].second;

    

    for(int i=1; i<n; i++)

    {

        if(nums[i].second > minPos)

        {

            maxDist = max(maxDist, (nums[i].second - minPos));

        }

        minPos = min(minPos, nums[i].second);

    }

    

    return maxDist;

}

