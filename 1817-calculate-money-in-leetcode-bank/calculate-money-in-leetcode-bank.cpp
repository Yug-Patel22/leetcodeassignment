class Solution {
public:
    int totalMoney(int n) {
        int loop=(n/7),sum=0,i=0,days=7;
        while(loop--){
            int c=days+i;
            int a=(c*(c+1))/2;
            a-=(i*(i+1))/2;
            i++;
            sum+=a;
        }
        if(n%7!=0){
            int c=(n%7)+i;
            sum+=((c*(c+1))/2);
            sum-=(i*(i+1))/2;
        }
        return sum;
    }
};