class Solution {
public:
    string remove_zero(string s){
        int c=0;
        while(c<s.length() && s[c]=='0')c++;
        if(c==s.length())return "0";
        return s.substr(c);
    }
    string removeKdigits(string num, int k) {
        int n=num.length();
        if(n==k || n==0)return "0";
        if(num[0]=='0')num=remove_zero(num);
        n=num.length();
        stack<char>s;
        for(int i=0; i<n; i++){
            while(!s.empty() && s.top()>num[i] && k>0){
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        while(!s.empty() && k>0){
            s.pop();
            k--;
        }
        num="";
        while(!s.empty()){
            num+=s.top();
            s.pop();
        }
        reverse(num.begin(),num.end());
        num=remove_zero(num);
        return num;
    }
};