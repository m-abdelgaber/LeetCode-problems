class Solution {
public:
    
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;
        map<char, char> charMap1;
        map<char, char> charMap2;
        for(int i=0;i < s.size();i++){
            if(charMap1.find(t[i]) != charMap1.end()){ //the char exists inside the map
                if(charMap1[t[i]] != s[i]){
                    return false;
                }
            }
            else{
                charMap1.insert({t[i], s[i]});
            }
            if(charMap2.find(s[i]) != charMap2.end()){ //the char exists inside the map
                if(charMap2[s[i]] != t[i]){
                    return false;
                }
            }
            else{
                charMap2.insert({s[i], t[i]});
            }
        }
        return true;
    }
};