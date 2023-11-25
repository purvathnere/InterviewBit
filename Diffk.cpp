int Solution::diffPossible(vector<int> &nums, int k) {
int i = 0;
int j = 0;
int n = nums.size();
while(j<n){
int diff = nums[j] - nums[i];
if(diff == k && i!= j){
return true;
}
else if(diff > k){
i++;
}
else{
j++;
}
}
return false;
}


