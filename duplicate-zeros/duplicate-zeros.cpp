#include <queue>


class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        queue< int > nums_queue;
        
        for(int i=0; i<arr.size(); i++){
            if(arr[i]!=0)
                nums_queue.push(arr[i]);
            else{
                nums_queue.push(arr[i]);
                nums_queue.push(arr[i]);
            }
            arr[i] = nums_queue.front();
            nums_queue.pop();
        }
    }
};