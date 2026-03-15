class Solution {
public:
    bool alphanum(char t){
        if(t>='A' && t<='Z' || t>='a' && t<='z' || t>='0' && t<='9'){
            return true;
        }
        return false;
    }
    bool isPalindrome(string s) {
        if(s.length()<=1)return true;
        int i=0, j=s.length()-1;
        while(i<j){
            while( i<j && (!alphanum(s[i]) || !alphanum(s[j]))){
                if(!alphanum(s[i]))i++;
                if(!alphanum(s[j]))j--;
            }
            if(i>=j)break;
            if(tolower(s[i])!=tolower(s[j]))return false;
            i++;
            j--;
        }
        return true;
    }
};