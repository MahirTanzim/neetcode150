
class Solution {    // 7 ms
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());
        return s==t;
    }
};


class Solution {    // 0 ms
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int n = s.size();
        int ss[26] = {0}, tt[26] = {0};
        for(int i = 0; i < n; i++){
            ss[s[i]-'a']++;
            tt[t[i]-'a']++;
        }
        for(int i = 0; i < 26; i++){
            if(ss[i] != tt[i]) return false;
        }
        return true;

    }
};


class Solution {    // 0 ms
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        int n = s.size();
        vector<pair<int, int>> v(26);
        for(int i = 0; i < n; i++){
            v[s[i]-'a'].first++;
            v[t[i]-'a'].second++;
        }
        for(auto p : v)
            if(p.first != p.second) return false;
        return true;

    }
};