class Solution {    //13 ms
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map < string, vector<string>> mp;
        for(string s: strs){
            string ss = s;  
            sort(ss.begin(), ss.end());
            mp[ss].push_back(s);
        }
        vector <vector<string>> ans;
        for(auto &m : mp)
            ans.push_back(m.second);
        
        return ans;
    }
    
}; 