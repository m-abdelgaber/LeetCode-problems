class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int counter =0;
        queue<int > index;
        for (int i=0;i< nums.size(); i++){
            if(nums[i] == val){
                index.push(i);
            }
            else{
                counter++;
                if(!index.empty()){
                    nums[index.front()] = nums[i];
                    index.pop();
                    index.push(i);
                }
            }
        }
        return counter;
    }
};