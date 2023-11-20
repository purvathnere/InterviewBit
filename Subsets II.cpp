void help(vector<int>& nums, int i, vector<vector<int>>& s, vector<int> temp){
        if(i == nums.size()){
            sort(begin(temp),end(temp));
            s.push_back(temp);
            return;
        }
        int j = i;
        while(j<nums.size()-1 && nums[j] == nums[j+1])
            // when ignoring current, ignore all others equivalent to current
            j++;
        help(nums, j+1, s, temp);
        temp.push_back(nums[i]);
        help(nums, i+1, s, temp);
    }
    vector<vector<int>> Solution::subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> s;
        vector<int> temp;
        sort(nums.begin(), nums.end());
        help(nums, 0, s, temp);
        sort(begin(s),end(s));
                return s;
    }

