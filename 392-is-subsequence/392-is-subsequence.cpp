class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s=="" && t=="")
            return true;
        int sI =0;
        int sSize = s.size();
        for( int i=0;i < t.size();i++){
            if(t[i] == s[sI])
                sI++;
            if(sI == sSize)
                return true;
        }
        
        
        return false;
    }
};