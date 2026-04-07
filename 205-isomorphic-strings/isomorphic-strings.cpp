class Solution {
public:
    bool isIsomorphic(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<int,int>um1,um2;
        for(int i=0; i<s.length(); i++){
            if(um1.find(s[i])!=um1.end() && um1[s[i]]!=t[i])return false;
            else um1[s[i]]=t[i];
            if(um2.find(t[i])!=um2.end() && um2[t[i]]!=s[i])return false;
            else um2[t[i]]=s[i];
        }
        return true;
    }
};