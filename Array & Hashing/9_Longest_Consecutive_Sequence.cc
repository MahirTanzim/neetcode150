class Solution {     // 132 ms
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        set<int>st;
        int prev = INT_MIN, ccs = 0, lcs = 0;
        for(int i : nums) st.insert(i);
        for(int i : st){
            if(prev+1 == i) ccs++;
            else ccs = 1;
            lcs = max(ccs, lcs);
            prev = i;
        } 
        return lcs;
    }
};


class Solution {    // 131 ms
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        set<int>st;
        int ccs = 1, lcs = 0;
        for(int i : nums) st.insert(i);
        int prev =*st.begin();
        for(int i : st){
            if(prev+1 == i) ccs++;
            else ccs = 1;
            lcs = max(ccs, lcs);
            prev = i;
        } 
        return lcs;
    }
};


class Solution {    // 11 ms
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return 0;
        sort(nums.begin(), nums.end());
        int ccs = 1, lcs = 1;
        for(int i = 1; i < n; i++){
            if(nums[i] == nums[i-1]) continue;
            if(nums[i] - nums[i-1] == 1)
                ccs++;
            else ccs = 1;

            lcs = max(lcs, ccs);
        }
        return lcs;
    }
};