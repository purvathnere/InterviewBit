int Solution::majorityElement(const vector<int>& nums)
{
    int n=nums.size();
    int element = nums[0];
    int count = 0;
    for(int i=0;i<n;i++)
    {
        if(count==0)
        element=nums[i];
        if(element==nums[i])
        count+=1;
        else
        count -= 1;
    }
    return element;
}
