class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> newArr = heights;
        
        sort(newArr.begin(), newArr.end());
        int c=0;
        for(int i=0; i< newArr.size(); i++){
            if(newArr[i] != heights[i])
                c++;
        }
        return c;
    }
};