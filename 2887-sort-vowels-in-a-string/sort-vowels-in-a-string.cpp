//by integer vector
class Solution {
public:
    bool isVowel(char a){
        a=toupper(a);
        if(a=='A' || a=='E' || a=='I' || a=='O' || a=='U')return true;
        return false;
    }
    string sortVowels(string s) {
        vector<int>v;
        for(int i=0; i<s.length(); i++){
            if(isVowel(s[i])){
                int a=s[i];
                v.push_back(a);
            }
        }
        sort(v.begin(),v.end());
        int k=0;
        for(int i=0; i<s.length(); i++){
            if(isVowel(s[i])){
                char a=v[k++];
                s[i]=a;
            }
        }
        return s;
    }
};