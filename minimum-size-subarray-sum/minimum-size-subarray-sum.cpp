class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int lp=0;
        int rp =0;
        int minLen = nums.size();
        int len= 1;
        int total = nums[0];
        bool valid = true;
        bool minLenUpdated = false;
        while(valid){
            while(total < target  && rp < nums.size()-1){
                rp++;
                total += nums[rp];
                len = rp-lp+1;
                cout<<total;

                
            }
            if(total >= target && len <= minLen){
                minLen = len;
                minLenUpdated = true;
            }
            else if (total < target && rp == nums.size()-1)
                break;
            
            
            total -= nums[lp++];
            len = rp-lp+1;
        }
        return minLenUpdated? minLen: 0;
    }
};