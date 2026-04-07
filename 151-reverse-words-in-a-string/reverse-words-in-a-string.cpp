class Solution {
public:
    string reverseWords(string s) {
        int flag=0;
        string ans="";
        for(int i=0; i<s.length(); i++){
            if(!flag && s[i]==' ')continue;
            if(!flag && s[i]!=' ')flag=1;
            if(s[i]!=' ')ans+=s[i];
            if(s[i]==' ' && s[i-1]!=' ')ans+=s[i];
        }
        if(ans[ans.length()-1]==' ')ans.pop_back();
        int l=0,r=ans.length()-1;
        while(l<r){
            swap(ans[l++],ans[r--]);
        }
        l=0,r=0;
        int lastind=0;
        while(l<ans.length() && r<ans.length()){
            if(r!=ans.length()-1 && ans[r+1]!=' ')r++;
            if(ans[r+1]==' ' || r==ans.length()-1){
                lastind=r+2;
                while(l<r){
                    swap(ans[l++],ans[r--]);
                }
                l=r=lastind;
            }
        }
        return ans;
    }
};