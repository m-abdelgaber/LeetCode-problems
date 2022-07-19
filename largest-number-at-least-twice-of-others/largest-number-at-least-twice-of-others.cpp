class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        if(nums.size() <2)
            return -1;
        int sMaxNum=0;
        int maxNum= nums[0];
        int index =0;
        
        for(int i=1; i< nums.size(); i++){
            if(nums[i]> maxNum){
                sMaxNum = maxNum;
                maxNum = nums[i];
                index = i;
            }
            else if (nums[i] > sMaxNum){
                sMaxNum = nums[i];
            }
        }
        if (maxNum>= 2*sMaxNum)
            return index;    
        return -1;
    }
};