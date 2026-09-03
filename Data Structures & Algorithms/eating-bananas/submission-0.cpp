class Solution {
public:
    int time(vector<int>& arr, int hourly){ 
        int tot = 0;
        for(int i=0;i<arr.size();i++){
            tot += ceil((double)arr[i]/(double)hourly);
        }
        return tot;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high = *max_element(piles.begin(), piles.end());
        while(low<=high){
            int mid =(low+high)/2;
            long long int tot = time(piles, mid);
            if(tot <= h){
                high=mid-1;
            }
            else low = mid+1;
            }
        return low;
        }
};