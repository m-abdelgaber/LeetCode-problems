class Solution {
public:
    int findDigitsNumber(int num){
        int counter=0;
        while(num>0){
            counter+=1;
            num/=10;
        }
        return counter;
    }
    int findNumbers(vector<int>& nums) {
        int countEven =0;
        
        for(int i=0;i<nums.size();i++){
            if(findDigitsNumber(nums[i])%2 ==0){
                countEven +=1;
            }
        }
        return countEven;
    }
};