class Solution {    // 43 ms
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        int target = 0;
        sort(nums.begin(), nums.end());
        vector<vector<int>> v;
        for (int i = 0; i < n - 2; i++) {
            if (i != 0 && nums[i] == nums[i - 1])
                continue;
            int j = i + 1, k = n - 1;
            while (j < k) {
                
                if (nums[i] + nums[j] + nums[k] == 0){
                    v.push_back({nums[i], nums[j], nums[k]});
                    j++;
                    while(nums[j] == nums[j-1] && j<k) j++;
                }
                   
                else if (nums[i] + nums[j] + nums[k] > 0) k--;
                else if (nums[i] + nums[j] + nums[k] < 0) j++;
            }
        }
        return v;
    }
};