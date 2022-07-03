class Solution {
public:
    
    bool isIsomorphic(string s, string t) {
        if(s.size() != t.size())
            return false;
        map<char, char> charMap1;
        map<char, char> charMap2;

        for(int i=0;i < s.size();i++){
            // for(const auto& elem : charMap)
            // {
            //    std::cout << elem.first <<elem.second << "\n";
            // }
            // std::cout <<"\n";
            if(charMap1.find(t[i]) != charMap1.end()){ //the char exists inside the map
                if(charMap1[t[i]] != s[i]){
                    return false;
                }
            }
            else{
                
                // charMap.insert({t[i], s[i]});
                charMap1.insert({t[i], s[i]});
            }
            if(charMap2.find(s[i]) != charMap2.end()){ //the char exists inside the map
                if(charMap2[s[i]] != t[i]){
                    return false;
                }
            }
            else{
                
                // charMap.insert({t[i], s[i]});
                charMap2.insert({s[i], t[i]});
            }
            // else if(charMap.find(t[i]) != charMap.end()){ //the char exists inside the map
            //     if(charMap[t[i]] != s[i]){
            //         return false;
            //     }
            // }
            
        }
        
        // cout<<charMap.size()<<endl;
        // for(const auto& elem : charMap)
        //     {
        //        std::cout << elem.first <<elem.second << "\n";
        //     }
        return true;
    }
};