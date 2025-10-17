class NumArray {
    vector<int>v;
public:
    NumArray(vector<int>& nums) {
        v.resize(nums.size());
        v[0]=nums[0];
        for(int i=1; i<nums.size(); i++){
            v[i]=v[i-1]+nums[i];
        }
    }
    
    int sumRange(int left, int right) {
        // int sum=0;
        // for(int i=left; i<=right; i++){
        //     sum+=v[i];
        // }
        // return sum;
        if(left==0)return v[right];
        else return v[right]-v[left-1];
        return 0;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */