class Solution {
public:
    string reorderSpaces(string text) {
        int s=0,w=0;
        bool word=false;
        for(int i=0; i<text.length(); i++){
            if(text[i]!=' ')word=true;
            if(text[i]==' '){
                s++;
                if(word){
                    w++;
                    word=false;
                }
            }
        }
        if(text[text.length()-1]!=' ')w++;
        int div,mod;
        if(w==1){
            div=0;
            mod=s;
        }else{
            div=s/(w-1);
            mod=s%(w-1);
        }
        string ans="";
        word=false;
        for(int i=0; i<text.length(); i++){
            if(text[i]!=' '){
                word=true;
                ans+=text[i];
            }
            else{
                if(word && w>1){
                    word=false;
                    w--;
                    int j=0;
                    while(j<div && s){
                        ans+=' ';
                        s--;
                        j++;
                    }
                }
            }
        }
        int j=0;
        while(j<mod){
            ans+=' ';
            j++;
        }
        return ans;
    }
};