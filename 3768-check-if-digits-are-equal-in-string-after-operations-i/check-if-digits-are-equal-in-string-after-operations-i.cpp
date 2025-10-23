class Solution {
public:
    bool hasSameDigits(string s) {
        string ans="";
        while(s.length()>2){
            for(int i=0; i<s.length()-1; i++){
                int a=(((s[i]-'0')+(s[i+1]-'0'))%10);
                ans+=(a+'0');
            }
            s=ans;
            ans="";
        }
        return s[0]==s[1];
    }
};