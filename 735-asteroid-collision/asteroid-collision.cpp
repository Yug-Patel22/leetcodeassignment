class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int>v;
        for(int i=0; i<asteroids.size(); i++){           
            if(v.empty()){
                v.push_back(asteroids[i]);
                continue;
            }
            bool flag=false;

            if(v.back()>0 && asteroids[i]<0){
                while(!v.empty() && v.back()>0 &&v.back()<abs(asteroids[i])){
                    v.pop_back();
                }
                if(!v.empty() && v.back()>0 && v.back()==abs(asteroids[i])){
                    v.pop_back();
                    flag=true;
                }
                else if(!v.empty() && v.back()>0 && v.back()>abs(asteroids[i]))flag=true;
            }
            if(!flag)v.push_back(asteroids[i]);
        }
        return v;
    }
};