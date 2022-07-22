class Solution {
public:
    string reverseWords(string s) {
        string res ="";
        int fP=0; 
        int sP=0;
        
        
        while(fP < s.size() && sP < s.size()){
            for(;sP<s.size(); sP++){
                if(s[sP] == ' '){
                    
                    break;
                }
            }
            string subs="";
            for(int i = fP; i<sP; i++){
                subs = s[i]+ subs;
            }
            
            res = res + subs+ " ";
            fP = ++sP;
            for(; fP< s.size(); fP++){
                if(s[fP] != ' '){
                    sP = fP;
                    break;
                }
             }
        }
        cout<<fP<<" "<< sP;
        return res.substr(0, res.size()-1);   
    }
};