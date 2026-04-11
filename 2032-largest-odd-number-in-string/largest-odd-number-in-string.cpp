class Solution {
public:
    string largestOddNumber(const string &num) {
        int ind=-1;
        if(num.empty())return "";
        for(int i=(int)num.length()-1; i>=0; i--){
            if(num[i] == '1' || num[i] == '3' || num[i] == '5' || num[i] == '7' || num[i] == '9'){
                ind=i;
                break;
            }
        }
        if(ind==-1)return "";
        return num.substr(0,ind+1);
    }
};