class Solution {
public:
    string reverseWords(string s) {
        int fP;
        for(int sP=0; sP<s.size(); sP++){
            if(s[sP] == ' '){
                reverse(s.begin() + fP, s.begin() + sP);
                fP = sP +1;
            }
        }
        reverse(s.begin() + fP, s.end());
        return s;
    }
};