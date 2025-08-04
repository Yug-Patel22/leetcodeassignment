class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        unordered_map<int,int> um;
        int c=0,maxi=0;
        for(int i=0; i<fruits.size(); i++){
            um[fruits[i]]++; 
            while(um.size()>2){
                um[fruits[c]]--;
                if(um[fruits[c]]==0)um.erase(fruits[c]);
                c++;
            }
            maxi=max(maxi,i-c+1);
        }
        return maxi;
    }
};