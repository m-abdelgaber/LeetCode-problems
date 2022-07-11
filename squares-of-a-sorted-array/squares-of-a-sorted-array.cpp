class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        //get the index of the number closeset to 0
        int s_index = 0;// smallest abs element index
        int s_val = abs(nums[0]);
        for(int i=1; i< nums.size(); i++){
            if(abs(nums[i])<abs(s_val)){
                s_index = i;
                s_val = abs(nums[i]);
            }
        }
        cout<<"value: "<< s_val<<", index: "<< s_index<<endl;
        //launch the two pointers and populate the output vector 
        vector<int> output;
        output.push_back(s_val*s_val);
        bool left = false;
        int left_index= s_index;
        int right_index = s_index;
        bool right = false;
        if(s_index>0){
            left = true;
            left_index -=1;
        }
        if(s_index < nums.size()-1){
            right = true;
            right_index +=1;
        }
        while(true){
            if(left && right){
                int left_val = nums[left_index]* nums[left_index];
                int right_val = nums[right_index]*nums[right_index];
                if( left_val <= right_val){
                    output.push_back(left_val);
                    left_index -=1;
                }
                else{
                    output.push_back(right_val);
                    right_index +=1;
                }
            }
            else if(left){
                int left_val = nums[left_index]* nums[left_index];
                output.push_back(left_val);
                left_index -=1;
            }
            else if (right){
                int right_val = nums[right_index]*nums[right_index];
                output.push_back(right_val);
                right_index+=1;
            }
            else
                break;
            
            
            if(left_index < 0)
                left = false;
            
            if(right_index>= nums.size())
                right = false;
        }
        return output;
    }
};