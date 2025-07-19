class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans='*';
        int l=0,r=letters.size()-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(letters[mid]>target){
                ans=letters[mid];
                r=mid-1;
            }
            else l=mid+1;
        }
        if(ans=='*')return letters[0];
        return ans;
    }
};