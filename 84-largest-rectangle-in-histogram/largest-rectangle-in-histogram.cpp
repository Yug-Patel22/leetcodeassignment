class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int>ns,ps;
        int n=h.size();
        vector<int>nv(n,n),pv(n,-1);
        
        for(int i=0; i<h.size(); i++){
            while(!ns.empty() && h[ns.top()]>=h[n-i-1]) ns.pop();
            if(!ns.empty())nv[n-i-1]=ns.top();
            while(!ps.empty() && h[ps.top()]>=h[i])ps.pop();
            if(!ps.empty())pv[i]=ps.top();
            ps.push(i);
            ns.push(n-i-1);
        }
        int maxi=0;
        for(int i=0; i<n; i++){
            int a=(nv[i]-pv[i]-1)*h[i];
            maxi=max(maxi,a);
        }
        return maxi;
    }
};