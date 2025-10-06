class Solution {
public:
    vector<int> nsefun(vector<int>arr){
        stack<int>s;
        vector<int>v(arr.size(),arr.size());
        for(int i=arr.size()-1; i>=0; i--){
            while(!s.empty() && arr[s.top()]>=arr[i]){
                s.pop();
            }
            if(!s.empty()) v[i]=s.top();
            s.push(i);
        }
        return v;
    }
    vector<int> pseefun(vector<int>arr){
        stack<int>s;
        vector<int>v(arr.size(),-1);
        for(int i=0; i<arr.size(); i++){
            while(!s.empty() && arr[s.top()]>arr[i]){
                s.pop();
            }
            if(!s.empty()) v[i]=s.top();
            s.push(i);
        }
        return v;
    }
    int sumSubarrayMins(vector<int>& arr) {
        vector<int>nse=nsefun(arr);
        vector<int>psee=pseefun(arr);
        int mod=(int)(1e9+7);
        long long sum=0;
        for(int i=0; i<arr.size(); i++){
            long long l=i-psee[i];
            long long r=nse[i]-i;
            long long prod = (1LL * arr[i] * l) % mod;
            prod = (prod * r) % mod;
            sum = (sum + prod) % mod;
        }
        return (int)sum;
    }
};