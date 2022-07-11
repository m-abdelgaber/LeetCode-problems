class Solution {
public:
//     TESESEASESE
    vector<int> runningSum(vector<int>& nums) {
        int sumSoFar = nums[0];
        for(int i=1; i< nums.size(); i++){
            nums[i] += sumSoFar;
            sumSoFar = nums[i];
        }
        return nums;
    }
};