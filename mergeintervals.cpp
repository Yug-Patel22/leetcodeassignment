class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>v;
        v.push_back(intervals[0]);
        int i=1; 
        while(i<intervals.size()){
            if(v[v.size()-1][1]>=intervals[i][0]){
                v[v.size()-1][1]=max(v[v.size()-1][1],intervals[i][1]);
            }
            else{
                    v.push_back(intervals[i]);
            }
            i++;
        }
        return v;
    }
};