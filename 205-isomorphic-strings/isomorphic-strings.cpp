class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length()) return false;

        unordered_map<char,char>um1,um2;
        
        for(int i=0; i<s.length(); i++){
            if(um1.count(s[i])){
                if(um1[s[i]]!=t[i])return false;
            }
            else um1[s[i]]=t[i];
            if(um2.count(t[i])){
                if(um2[t[i]]!=s[i])return false;
                
            }
            else um2[t[i]]=s[i];
        }
        return true;
    }
};