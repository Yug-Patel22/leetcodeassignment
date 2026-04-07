class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<int,int>um;
        for(auto i:s){
            um[i]++;
        }
        for(auto i:t){
            if(um.find(i)==um.end())return false;
            else {
                if(um[i]==0)return false;
                else um[i]--;
            }
        }
        return true;
    }
};