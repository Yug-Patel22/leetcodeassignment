class Solution {
public:
    int helper(vector<int>a){
        stack<int>s;
        int maxi=0;
        for(int i=0; i<a.size(); i++){
            while(!s.empty() && a[s.top()]>=a[i]){
                int curr=s.top();
                s.pop();
                int pre=s.empty()?-1:s.top();
                maxi=max(maxi,(a[curr]*(i-pre-1)));
            }
            s.push(i);
        }
        while(!s.empty()){
            int curr=s.top();
            s.pop();
            int pre=s.empty()?-1:s.top();
            maxi=max(maxi,(a[curr]*(int(a.size())-pre-1)));
        }
        return maxi;
    }
    int maximalRectangle(vector<vector<char>>& matrix) {
        vector<vector<int>>v(matrix.size(),vector<int>(matrix[0].size(), 0));
        for(int i=0; i<v.size(); i++){
            for(int j=0; j<v[0].size(); j++){
                if(i==0) v[i][j]=matrix[i][j]-'0';
                else if(matrix[i][j]=='1'){
                    v[i][j]=1+v[i-1][j];
                }
                else v[i][j]=0;
            }
        }
        int maxi=0;
        for(int i=0; i<v.size(); i++){
            maxi=max(maxi,helper(v[i]));
        }
        return maxi;
    }
};