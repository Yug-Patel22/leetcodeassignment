class Solution {
public:
    string intToRoman(int num) {
        vector<int> v1={1,4,5,9,10,40,50,90,100,400,500,900,1000};
        vector<string> v2={"I","IV","V","IX","X","XL","L","XC","C","CD","D","CM","M"};
        string ans="";
        for(int i=v1.size()-1; i>=0; i--){
            while(num>=v1[i]){
                ans+=v2[i];
                num-=v1[i];
            }
        }
        return ans;
    }
};