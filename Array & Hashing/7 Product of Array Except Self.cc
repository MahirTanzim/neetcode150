class Solution {    // 0 ms
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int mult = 1;
        int n = nums.size();
        vector <int> pre(n), suf(n), ans(n);
        pre[0] = 1;
        suf[n-1] = 1;
        for(int i = 1; i < n; i++){
            mult*=nums[i-1];
            pre[i] = mult;
        }
        mult = 1;
        for(int i = n-2; i >= 0; i--){
            mult*=nums[i+1];
            suf[i] = mult;
        }
        for(int i = 0; i < n; i++){
            ans[i] = suf[i]*pre[i];
        }
        return ans;
    }
};