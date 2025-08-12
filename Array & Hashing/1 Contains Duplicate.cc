class Solution {    // 124 ms
public:
    bool containsDuplicate(vector<int>& nums) {
        map <int, int> mp;
        for(int i : nums)
            mp[i]++;
        for(auto m : mp)
            if(m.second > 1) return true;
        
        return false;
    }
};


class Solution {    // 63 ms
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, int> mp;
        for(int i : nums)
            mp[i]++;
        for(auto m : mp)
            if(m.second > 1) return true;
        
        return false;
    }
};

class Solution {    //51 ms
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map <int, bool> mp;
        for(int n : nums){
            if(mp[n]) return true;
            mp[n] = true;
        }
        return false;
    }
};