class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxOnes =0;
        int maxSoFar =0;
        for( int i=0;i < nums.size(); i++){
            if(nums[i]== 1){
                maxOnes+=1;
            }
            else{
                if(maxOnes > maxSoFar)
                    maxSoFar = maxOnes;
                maxOnes =0;
            }
            
        }
        if(maxOnes > maxSoFar)
            maxSoFar = maxOnes;
        return maxSoFar;
    }
};