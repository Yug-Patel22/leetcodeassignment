class Solution {
public:
    string makeFancyString(string s) {
        if(s.length()<3)return s;
        string ans="";
        int c=1;
        ans+=s[0];
        for(int i=1; i<s.length(); i++){
            if(s[i-1]==s[i])c++;
            else c=1;
            if(c<=2)ans+=s[i];
        }
        return ans;
    }
};