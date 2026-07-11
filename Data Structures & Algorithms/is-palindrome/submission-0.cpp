class Solution {
public:
    bool isPalindrome(string s) {
        string s1 = "";
        for(char x: s){
            if(!isalnum(x)){}
            else{
                s1.push_back(tolower(x));
            }
        }
        string r = string(s1.rbegin(), s1.rend());
        if(s1 == r) return 1;
        return 0;
    }
};