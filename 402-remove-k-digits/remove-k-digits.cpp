class Solution {
public:
    string remove_zero(string a){
        int c = 0, n = a.length();
        while (c < n && a[c] == '0') c++;
        if (c == n) return "0";
        return a.substr(c);
    }
    string removeKdigits(string num, int k) {
        if(num.length()==k)return "0";
        int n=num.length();
        if(num[0]=='0'){
            num=remove_zero(num);
        }
        n=num.length();
        stack <char>s;
        for(int i=0; i<n; i++){
            while(!s.empty() && s.top()>num[i] && k>0){
                s.pop();
                k--;
            }
            s.push(num[i]);
        }
        while (k > 0 && !s.empty()) {
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