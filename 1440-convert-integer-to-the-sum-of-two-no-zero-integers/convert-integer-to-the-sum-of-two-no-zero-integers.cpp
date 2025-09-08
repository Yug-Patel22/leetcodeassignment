class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        for(int i=1; i<n; i++){
            int a=i,b=n-i;
            if(a+b==n){
                bool flag=false;
                while(a>0){
                    int temp=a%10;
                    if(temp==0){
                        flag=true;
                        break;
                    }
                    a/=10;
                }
                while(b>0 && !flag){
                    int temp=b%10;
                    if(temp==0){
                        flag=true;
                        break;
                    }
                    b/=10;
                }
                if(!flag)return {i,n-i};
            }
        }
        return {};
    }
};