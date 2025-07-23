class Solution {
public:
    string reverseStr(string s, int k) {
        int n=s.length();
        if(n<k){
            reverse(s.begin(), s.end());
            return s;
        }
        if(n<=2*k){
            reverse(s.begin(),s.begin()+k);
            return s;
        }
        int l=n/(2*k);
        int i=0;
        int j=k-1;
        while(i<n){
            int left=i;
            int right=j;
            while(left<right){
                swap(s[left],s[right]);
                left++;
                right--;
            }
            i+=2*k;
            j+=2*k;
            if(j>n-1)j=n-1;
        }
        return s;
    }
};