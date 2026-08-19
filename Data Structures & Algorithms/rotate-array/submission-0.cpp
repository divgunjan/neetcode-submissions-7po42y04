class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> v=nums;
        int n = nums.size();
        k%=n;
        int i=0;
        while(i < k){
            int end = v[v.size()-1];
            v.insert(v.begin(), end); 
            v.pop_back();
            i++;
        }
    nums=v;
    }
};