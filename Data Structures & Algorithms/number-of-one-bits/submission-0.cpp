class Solution {
public:
    int hammingWeight(uint32_t n) {
        string res="";
        int count=0;
        while(n>=1){
            if(n%2==1) res.push_back('1');
   			else res.push_back('0');
   			n/=2;         
        }
        for(int i=0;i<res.length();i++){
        	if(res[i] == '1') count++;
        }
        return count;
    }
};
