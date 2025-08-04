class Solution {
public:
    int myAtoi(string s) {
        bool digit=false;
        bool sign=false;
        bool neg=false;
        long long sum=0;
        for(int i=0; i<s.length(); i++){
            if(s[i]==' '){
                if(!digit && !sign)continue;
                else break;
            }
            else if(s[i]=='+' || s[i]=='-'){
                if(sign || digit)break;
                sign=true;
                if(s[i]=='-')neg=true;
            }
            else if(isdigit(s[i])){
                digit=true;
                sum=sum*10+(s[i]-'0');
            }
            else break;
            if(!neg && sum>INT_MAX || neg && -sum<INT_MIN){
                if(neg)return INT_MIN;
                else return INT_MAX;
            }
        }
        if(neg)return -sum;
        return sum;
    }
};