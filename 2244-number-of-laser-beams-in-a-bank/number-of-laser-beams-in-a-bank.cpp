class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int c=0,pre=0;
        int ans=0;
        for(int i=0; i<bank.size(); i++){
            bool flag=false;
            for(int j=0; j<bank[i].length(); j++){
                if(bank[i][j]=='1'){
                    ans+=pre;
                    c++;
                    flag=true;
                }
            }
            if(flag){
                pre=c;
                c=0;
            }
        }
        return ans;
    }
};