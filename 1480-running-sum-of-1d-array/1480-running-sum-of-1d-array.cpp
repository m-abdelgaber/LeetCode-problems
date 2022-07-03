class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int sumSoFar = nums[0];
        for(int i=1; i< nums.size(); i++){
            int val = nums[i];
            nums[i] += sumSoFar;
            sumSoFar+= val;
        }
        return nums;
    }
};