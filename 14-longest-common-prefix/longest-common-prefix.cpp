class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int small=0;
        for( int i=1; i<strs.size(); i++){
            if(strs[i].length()<strs[small].length())small=i;
        }
        string ans=strs[small];
        for(int i=0; i<strs.size(); i++){
            if(i==small)continue;
            int ind=-1;
            for(int j=0; j<ans.length(); j++){
                if(ans[j]!=strs[i][j]){
                    ind=j;
                    break;
                }
            }
            if(ind==0)return "";
            if(ind!=-1) ans=ans.substr(0,ind);
        }
        return ans;
    }
};