class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_set<char>us;
        for(auto p:brokenLetters){
            us.insert(p);
        }
        text+=' ';
        int c=0;
        bool flag=true;
        for(int i=0; i<text.length(); i++){
            if(text[i]==' '){
                if(flag)c++;
                else flag=true;
            }
            if(!flag)continue;
            else{
                if(us.count(text[i])){
                    flag=false;
                }
            }
        }
        return c;
    }
};