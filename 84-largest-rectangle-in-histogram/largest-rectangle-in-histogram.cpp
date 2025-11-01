class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int>s;
        int maxi=0;
        for(int i=0; i<heights.size(); i++){
            while(!s.empty() && heights[s.top()]>=heights[i]){
                int curr=heights[s.top()];
                s.pop();
                int presmaller=(s.empty())?-1:s.top();
                maxi=max(maxi,(curr*(i-presmaller-1)));
            }
            s.push(i);
        }
        while(!s.empty()){
            int curr=heights[s.top()];
            s.pop();
            int presmaller=(s.empty())?-1:s.top();
            maxi=max(maxi,(curr*(int(heights.size())-presmaller-1)));
        }
        return maxi;
    }
};