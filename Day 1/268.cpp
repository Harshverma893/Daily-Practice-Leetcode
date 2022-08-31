class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i = 0;
        sort(nums.begin(),nums.end());
        for(auto x : nums){
            if(i != x) return i;
            i++;
        }
        return i;
    }
};