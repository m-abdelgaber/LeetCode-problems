class Solution {
public:
    string addBinary(string a, string b) {
        string res; 
        int carry = 0; 
        int cA = a.size()-1; 
        int cB = b.size()-1;
        
        for(; cA>=0 && cB>=0; cA--, cB--){
            int sum = (a[cA]- '0')+(b[cB]- '0')+ carry;
            carry = sum/2;
            res = to_string(sum%2) + res;
        }
        
        if(cA>=0){
            for(; cA>=0; cA--){
                int sum = (a[cA] - '0') + carry;
                carry = sum/2;
                res = to_string(sum%2) + res;
            }
        }
        else if (cB>=0){
            for(; cB>=0; cB--){
                int sum = (b[cB] - '0') + carry;
                carry = sum/2;
                res = to_string(sum%2) + res;
            }
        }
        if(carry ==1)
            res = '1' + res;
        return res;
    }
};