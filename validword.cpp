class Solution {
public:
    bool alpha(char a){
        if(a>='a' &&  a<='z' || a>='A' && a<='Z')return true;
        return false;
    }
    bool isnum(char a){
        if(a>='0' && a<='9')return true;
        return false;
    }
    bool vow(char a){
        if(a=='a' || a=='e' || a=='i' || a=='o' || a=='u' || a=='A' || a=='E' || a=='I'||a=='O' || a=='U')return true;
        return false;
    }
    bool isValid(string word) {
        if(word.length()<3)return false;
        bool v=false,co=false;
        for(int i=0; i<word.length(); i++){
            if(alpha(word[i])){
                if(vow(word[i]))v=true;
                else co=true;
            }
            else if(isnum(word[i]))continue;
            else return false;
        }
        if(!v || !co)return false;
        return true;
    }
};