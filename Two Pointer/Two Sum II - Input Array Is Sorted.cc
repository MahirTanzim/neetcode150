class Solution {    //0 ms
public:
   vector<int> twoSum(vector<int>& v, int target) {
        unordered_map <int, int> mp;
        

        for(int i = 0; i < v.size(); i++){
            int sub = target - v[i];
            if(mp.count(sub)) return {mp[sub]+1, i+1};
            mp[v[i]] = i;
        }
        
        return {};
    }
};


class Solution {    // 0 ms
public: 
   vector<int> twoSum(vector<int>& v, int target) {
        int i = 0, j = v.size()-1;
        while(i<j){
            if(v[i]+v[j] == target) return {i+1, j+1};
            else if(v[i]+v[j] > target) j--;
            else if(v[i]+v[j] < target) i++;
        }
        return {};
    }
};