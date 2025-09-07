class Solution {
public:
    vector<int> sumZero(int n) {
        bool even;
        if(n%2==0)even=true;
        else even=false;
        vector<int>v;
        int l=0,r=n-1;
        int t=n/2;
        while(t){
            v.push_back(-t);
            v.push_back(t);
            t--;
        }
        if(!even)v.push_back(0);
        return v;
    }
};