class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int actSum=0;
        int n=nums.size();

        int expSum = n*(n+1)/2;

        for(int x:nums){
            actSum = actSum+x;            
        }
    return expSum - actSum; 
    }
};
