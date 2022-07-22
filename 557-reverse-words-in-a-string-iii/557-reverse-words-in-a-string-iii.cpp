class Solution {
public:
    string reverseWords(string s) {
        string res ="";
        int fP=0; 
        int sP=0;
        int n = s.size();
        
        while(fP < n && sP < n){
            for(;sP<n; sP++){
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
            for(; fP< n; fP++){
                if(s[fP] != ' '){
                    sP = fP;
                    break;
                }
             }
        }
        return res.substr(0, n);   
    }
};