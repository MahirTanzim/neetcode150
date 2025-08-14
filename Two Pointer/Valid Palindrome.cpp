class Solution {    //1 ms
public:
    bool isPalindrome(string s) {

        string str;
        for(char c : s){
            if((c>='a' && c<='z') || (c>='0' && c<='9')) str.push_back(c);
            else if(c>='A' && c<='Z') str.push_back(c+32);
        }
        int i = 0, j = str.size()-1;
        while(i <= j){
            if(str[i] != str[j]) return false;
            i++; j--;
        }
            
        return true;
    }

};



class Solution {    //0 ms
public:
    bool isPalindrome(string s) {

        string str = "";
        for(char c : s){
            if((c>='a' && c<='z') || (c>='0' && c<='9')) str+=c;
            else if(c>='A' && c<='Z') str+=(c+32);
        }
        int i = 0, j = str.size()-1;
        while(i <= j){
            if(str[i] != str[j]) return false;
            i++; j--;
        }
            
        return true;
    }

};
