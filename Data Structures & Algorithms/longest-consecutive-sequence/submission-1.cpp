class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            sort(nums.begin(), nums.end());
            int maxLen = 1; int currLen = 1;

            if(nums.empty()) return 0;

            for(int i=1;i<nums.size();i++){
                if(nums[i] == nums[i-1]) continue;
                if(nums[i] -nums[i-1] ==1){
                    maxLen = max(maxLen, ++currLen);
                }else{
                    currLen = 1;
                }
            }
            return maxLen;                
        }
    };
