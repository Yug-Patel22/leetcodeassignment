class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.length()!=goal.length())return false;
        if (s == goal) {
            vector<int> count(26, 0);
            for (char c : s) {
                if (++count[c - 'a'] > 1) return true;
            }
            return false;
        }
        char s1,s2,g1,g2;
        int c=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]!=goal[i]){
                c++;
                if (c > 2) return false;
                if(c==1){
                    s1=s[i];
                    g1=goal[i];
                }
                else{
                    s2=s[i];
                    g2=goal[i];
                }
            }
        }
        if(c==2){
            if(s1==g2 && s2==g1)return true;
        }
        return false;
    }
};