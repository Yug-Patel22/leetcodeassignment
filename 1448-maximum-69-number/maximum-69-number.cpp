class Solution {
public:
    int maximum69Number (int num) {
        int c=0;
        int t=num;
        while(t>0){
            c++;
            t/=10;
        }
        t=pow(10,c-1);
        while(t>0){
            int a=(num/t)%10;
            if(a==6){
                num-=t*6;
                num+=t*9;
                break;
            }
            t/=10;
        }
        return num;
    }
};