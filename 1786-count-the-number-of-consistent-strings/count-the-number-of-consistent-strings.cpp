class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        unordered_set<char>us;
        for(int i=0; i<allowed.length(); i++){
            us.insert(allowed[i]);
        }
        int c=0;
        for(int i=0; i<words.size(); i++){
            bool flag=true;
            for(int j=0; j<words[i].length(); j++){
                if(us.find(words[i][j])==us.end())flag=false;
            }
            if(flag)c++;
        }
        return c;
    }
};