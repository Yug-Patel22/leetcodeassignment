class Solution {
public:
    string reverseWords(string s) {
        stack<char>s1;
        string ans="";
        for(int i=s.length()-1; i>=0; i--){
            if(s[i]!=' '){
                s1.push(s[i]);
            }
            else if(s[i]==' ' && !s1.empty()){
                while(!s1.empty()){
                    ans+=s1.top();
                    s1.pop();
                }
                ans+=' ';
            }
        }
        if(!s1.empty()){
            while(!s1.empty()){
            ans+=s1.top();
            s1.pop();
            }
        }
        else ans.pop_back();
        return ans;
    }
};