class Solution {    // 5 ms
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, int> mp;
        for(int i : nums) mp[i]++;
        vector <pair <int, int>> v;
        for(auto [x,y] : mp){
            v.push_back({y, x});
        }
        sort(v.begin(), v.end(), greater<>());
        vector <int> ans;
        for(int i=0; i<k; i++)
            ans.push_back(v[i].second);
        
        
        return ans;
    }
};


class Solution {    //2 ms
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for(int i : nums) mp[i]++;
        vector <pair <int, int>> v;
        for(auto [x,y] : mp){
            v.push_back({y, x});
        }
        sort(v.begin(), v.end(), greater<>());
        vector <int> ans;
        for(int i=0; i<k; i++)
            ans.push_back(v[i].second);
        
        
        return ans;
    }
};


class Solution {    // 0 ms
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int thr = 1e4+7;
        int mp[(int)2e4+7]={0};
        for(int i : nums) {
            mp[i+thr]++;
        }
        vector <pair <int, int>> v;
        for(int i=0;i<2e4+7;i++){
            if(mp[i]) v.push_back({mp[i],i});
        }
        sort(v.begin(), v.end(), greater<>());
        vector <int> ans;
        for(int i=0; i<k; i++)
            ans.push_back(v[i].second-thr);
        
        
        return ans;
    }
};