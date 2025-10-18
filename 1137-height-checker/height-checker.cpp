class Solution {
public:
    int heightChecker(vector<int>& heights) {
        int min=*min_element(heights.begin(),heights.end());
        int max=*max_element(heights.begin(),heights.end());
        vector<int>v(max-min+1);
        for(int i=0; i<heights.size(); i++){
            v[heights[i]-min]++;
        }
        int i=0,k=0;
        vector<int>h(heights.size());
        while(i<v.size() && k<heights.size()){
            while(v[i]>0){
                h[k++]=i+min;
                v[i]--;
            }
            i++;
        }
        int c=0;
        for(i=0; i<heights.size(); i++){
            if(heights[i]!=h[i])c++;
        }
        return c;
    }
};