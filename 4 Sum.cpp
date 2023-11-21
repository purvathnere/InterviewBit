vector<vector<int> > Solution::fourSum(vector<int> &nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        set<vector<int>> st;
        for(int i = 0; i < n-3; i++){
            for(int j = i+1; j < n-2; j++){
                long long newtar = (long long)target - ((long long)nums[i] + (long long)nums[j]);
                int l = j+1, r = n-1;
                while(l < r){
                    if(nums[l] + nums[r] < newtar){
                        l++;
                    }else if(nums[l] + nums[r] > newtar){
                        r--;
                    }else{
                        st.insert({nums[i], nums[j], nums[l], nums[r]});
                        l++;
                        r--;
                    }
                }
            }
        }
        for(auto it : st) ans.push_back(it);

        return ans;
}

// We need to store unique combinations
// So we used set to store them up
// sort helps use to get the increasing order
// Long Long used for large test cases

// Do hit the like button, if u guys like this solution!!

