class Solution {
public:
    int characterReplacement(string s, int k) {
        int left = 0;
        int maxf = 0;
        int maxLen = 0;
        int freq[26] = {0};
        for(int right = 0;right<s.size();right++){
            freq[s[right] - 'A']++;
            maxf = max(maxf, freq[s[right] - 'A']);
            while((right-left+1) - maxf > k){
                freq[s[left] - 'A']--;
                left++;
            }
        maxLen = max(maxf, right-left+1);
        }
    return maxLen;
    }
};