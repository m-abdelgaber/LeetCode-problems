class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        // int readPointer = 0;
        int writePointer = 0;
        
        for(int i=0; i< nums.size(); i++){
            if(nums[i] %2 ==0){
                int temp = nums[i];
                nums[i] = nums[writePointer];
                nums[writePointer++] = temp;
            }

        }
        return nums;
    }
};