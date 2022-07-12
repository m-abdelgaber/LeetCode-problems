class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        bool stage1= true;
        if (arr.size()<3)
            return false;
        
        for(int i=0;i<arr.size()-1; i++){
            if(arr[i+1] == arr[i])
                return false;
            if(stage1){
                if (arr[i+1]<arr[i]){
                    if(i==0)
                        return false;
                    else
                        stage1= false;
                }
            }
            else{
                if(arr[i+1]> arr[i])
                    return false;
            }
        }
        return true && ! stage1;
    }
};