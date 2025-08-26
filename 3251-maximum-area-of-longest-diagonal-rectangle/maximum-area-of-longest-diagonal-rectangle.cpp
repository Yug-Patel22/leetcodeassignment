class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& dimensions) {
        long long maxi=-1;
        int area=-1;
        for(int i=0; i<dimensions.size(); i++){
            long long dia=dimensions[i][0]*dimensions[i][0]+dimensions[i][1]*dimensions[i][1];
            int a=dimensions[i][0]*dimensions[i][1];
            if(dia>maxi || dia==maxi && a>area){
                maxi=dia;
                area=a;
            }
        }
        return area;
    }
};