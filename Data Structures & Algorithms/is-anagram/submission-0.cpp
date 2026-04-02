class Solution {
public:
    bool isAnagram(string s, string t) {
        map<char, int> mpp;
        map<char, int> mp;

        if(t.length() != s.length()) return 0;

        for(int i=0;i<t.length();i++){
            mpp[s[i]]++;
            mp[t[i]]++;
        }
        return mpp == mp; //comparison operator for the same keys and values
        }
    };