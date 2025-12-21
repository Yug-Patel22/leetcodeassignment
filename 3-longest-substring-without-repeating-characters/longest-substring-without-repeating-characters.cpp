class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty())return 0;
        unordered_map<char,int>um;
        int c=0,maxlen=0;
        for(int i=0; i<s.length(); i++){
            if(um.find(s[i])!=um.end()){
                c=max(c,um[s[i]]+1);
            }
            um[s[i]]=i;
            maxlen=max(maxlen,i-c+1);
        }
        return maxlen;
    }
};