class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& inte, vector<int>& n) {
        vector<vector<int>>v;
        int flag=0;
        for(int i=0; i<inte.size(); i++){
            if(n[0]<=inte[i][0]){
                if(!flag){
                    flag=1;
                    if(v.empty()){
                        v.push_back(n);
                    }
                    else{
                        if(v[v.size()-1][1]>=n[0]){
                            if(n[1]>=v[v.size()-1][1])
                                v[v.size()-1][1]=n[1];
                        }
                        else{
                            v.push_back(n);
                        }
                    }
                }
                if(v[v.size()-1][1]>=inte[i][0]){
                    if(inte[i][1]>=v[v.size()-1][1])
                        v[v.size()-1][1]=inte[i][1];
                }
                else{
                    v.push_back(inte[i]);
                }
            }
            else{
                v.push_back(inte[i]);
            }
        }
        if(!flag){
            if(v.empty()){
                v.push_back(n);
            }
            else{
            if(v[v.size()-1][1]>=n[0]){
                if(n[1]>=v[v.size()-1][1])
                    v[v.size()-1][1]=n[1];
            }
            else{
                v.push_back(n);
            }}
        }
        return v;
    }
};