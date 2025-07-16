class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())return false;
        unordered_map<char,int> um;
        for(int i=0; i<s.length(); i++){
            um[s[i]]++;
        }
        for(int i=0; i<t.length(); i++){
            auto it=um.find(t[i]);
            if(it!=um.end()){
                if(um[t[i]]==1)um.erase(it);
                else um[t[i]]--;
            }
            else return false;
        }
        if(um.size()==0)return true;
        else return false;
    }
};