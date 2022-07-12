#include <unordered_set>
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_set <int> numbers;
        for (int i=0;i< arr.size(); i++){
            unordered_set<int> :: iterator twice = numbers.find (arr[i]*2);
            unordered_set<int> :: iterator half;
            if(arr[i]%2==0)
                half = numbers.find (arr[i]/2);
            else
                half = numbers.end();
            if(twice != numbers.end() || half != numbers.end()){
                return true;
            }
            unordered_set<int> :: iterator elem = numbers.find (arr[i]);
            
            
            numbers.insert(arr[i]);
        }
        
        return false;
    }
};