class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int n = nums.size();
    //     for(int i=0;i<n;i++){
    //     	for(int j=i+1;j<n;j++){
    //     		if(nums[i] != nums[j]){
    //     			return 0;
    //     		}
    //     	}
    //     }
    //     return 1;
    // }
        map<int, int> mpp;
     	for(auto it:nums){
            mpp[it]++;
     	}
        for(auto it:mpp){
            if (it.second >1) return true;
        }
        return false;
    }
};