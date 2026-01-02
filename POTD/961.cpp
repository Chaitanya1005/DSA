class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        int cnt=1;
        sort(nums.begin(), nums.end());
        for(int i=1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]) cnt++;
            if (cnt==n) return nums[i];
        }
        return 0;
    }
};