class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        
        vector<int> v;
        long long int p =1;
        
        for(int i: nums){
            p = p*i;
        }
        
        int z = count(nums.begin(), nums.end(), 0);
        
        if(z ==1 ){
            p=1;
    
            for(int x: nums){
                if(x!=0) p*=x;
            }
            
            for(int i=0;i<nums.size();i++){
                if(nums[i] == 0){
                    v.push_back(p);
                }
                else v.push_back(0);
            }
        return v;
        }

        if(z>1){
            return vector<int> (nums.size(),0);
        }
        
        for(int i=0;i<nums.size();i++){
            v.push_back(p/nums[i]);
        }
    return v;
    }    
};
