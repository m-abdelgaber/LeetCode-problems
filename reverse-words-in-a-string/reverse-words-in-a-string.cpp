class Solution {
public:
    string reverseWords(string s) {
        string res ="";
        int fP=0; 
        int sP=0;
        for(; fP< s.size(); fP++){
            if(s[fP] != ' '){
                sP = fP;
                break;
            }
        }
        
        while(fP < s.size() && sP < s.size()){
            for(;sP<s.size(); sP++){
                if(s[sP] == ' '){
                    
                    break;
                }
            }
            string subs="";
            for(int i = fP; i<sP; i++){
                subs = subs+ s[i];
            }
            
            res = " "+ subs +res;
            fP = ++sP;
            for(; fP< s.size(); fP++){
                if(s[fP] != ' '){
                    sP = fP;
                    break;
                }
             }
        }
        cout<<fP<<" "<< sP;
        return res.substr(1);
    }
};