class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string s) {
        int chund=0;
        int row=0;
        for(int i=0; i<s.length(); i++){
            int a=widths[s[i]-'a'];
            if(chund+a>100){
                row++;
                chund=0;
            }
            chund+=a;
        }
        row++;
        vector<int>v={row,chund};
        return v;
    }
};