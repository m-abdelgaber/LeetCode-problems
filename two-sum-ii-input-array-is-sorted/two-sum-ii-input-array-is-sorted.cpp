#include <map>

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> valueIndex;
        vector<int> res;
        for(int i=0; i< numbers.size(); i++){
            if(valueIndex.find(target - numbers[i]) != valueIndex.end()){
                res.push_back(valueIndex[target- numbers[i]]);
                res.push_back(i+1);
                return res;
            }
            valueIndex[numbers[i]] = i+1;
        }
        return res;
    }
};