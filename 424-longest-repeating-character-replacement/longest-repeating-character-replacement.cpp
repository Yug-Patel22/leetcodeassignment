class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>v(26,0);
        int c=0,maxlen=0;
        int maxi=v[0];
        char main='A';
        for(int i=0; i<s.length(); i++){
            v[s[i]-'A']++;
            if(v[s[i]-'A']>maxi){
                maxi=v[s[i]-'A'];
                main=s[i];
            }
            // for(int x=1; x<v.size(); x++){
            //     if(v[x]>maxi){
            //         maxi=v[x];
            //         main=x+'A';
            //     }
            // }
            long long sum=accumulate(v.begin(),v.end(),0);
            int others=sum-v[main-'A'];
            if(others<=k){
                maxlen=max(maxlen,i-c+1);
            }
            if(others>k){
                v[s[c++]-'A']--;
            }
        }
        return maxlen;
    }
};