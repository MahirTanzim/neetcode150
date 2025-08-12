class Solution {
public:

    string encode(vector<string>& strs) {
        string en;
        for(string s : strs){
            en += (to_string(s.size())+"$"+ s);
        }
        return en;
    }

    vector<string> decode(string s) {
        vector <string> v;
        int i = 0;
        while(i < s.size()){
            int j = i;
            while(j < s.size() && s[j] != '$') j++;
            int len = stoi(s.substr(i, j-i));
            i = j+1;
            v.push_back(s.substr(i, len));
            i+=len;
        }
        return v;
    }
};