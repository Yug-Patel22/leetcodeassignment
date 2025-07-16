class Solution {
public:
    bool anagram(string s,string t){
        if (s.length() != t.length()) return false;
        int count[26] = {0};
        for (char c : s) count[c - 'a']++;
        for (char c : t) {
            if (--count[c - 'a'] < 0) return false;
        }
        return true;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        vector<string>v;
        v.push_back(words[0]);
        for(int i=1; i<words.size(); i++){
            if(anagram(v.back(),words[i])){
                continue;
            }
            else v.push_back(words[i]);
        }
        return v;
    }
};