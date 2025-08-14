class Solution {
public:
    string largestGoodInteger(string num) {
        if(num.length()<3)return "";
        int c=0;
        string ans="";
        for(int i=1; i<num.length(); i++){
            if(num[i]==num[i-1])c++;
            else c=0;
            if(c==2){
                string temp = string(3, num[i]);
                if(temp>ans)
                    ans=temp;
            }
        }
        return ans;
    }
};