class Solution {
public:
    int maxArea(vector<int>& heights) {
        int j = 0, k = heights.size()-1;
        long long int maxArea = 0;
        while(j<k){
            int h = min(heights[j], heights[k]);
            int l = k-j;
            long long int area = h*l;
            maxArea = max(maxArea, area);
            if(heights[j] < heights[k]){
                j++;
            }
            else k--;
        }
    return maxArea;
    }
};

