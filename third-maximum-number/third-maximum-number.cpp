class Solution {
public:
    int thirdMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int c=0;
        int currNum = nums[nums.size()-1];
        for(int i=nums.size()-2; i>=0; i--){
            if (nums[i]!= currNum){
                c++;
                currNum = nums[i];
            }
            if (c==2)
                return nums[i];
        }
        return nums[nums.size()-1];
    }
};