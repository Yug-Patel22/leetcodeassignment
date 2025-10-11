class Solution {
public:
    bool isvowel(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u')return true;
        return false;
    }
    int maxFreqSum(string s) {
        unordered_map<char,int>um;
        for(int i=0; i<s.length(); i++){
            um[s[i]]++;
        }
        int maxvow=0,maxcon=0;
        for(auto p:um){
            if(isvowel(p.first)){
                if(p.second>maxvow)maxvow=p.second;
            }
            else{
                if(p.second>maxcon)maxcon=p.second;
            }
        }
        return maxvow+maxcon;
    }
};