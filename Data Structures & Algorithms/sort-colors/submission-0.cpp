class Solution {
    public:
        void sortColors(vector<int>& nums) {
            unordered_map<int , int> mp;
            int n = nums.size();
            for(int i = 0 ; i < n ; i++){
            mp[nums[i]] ++;
            }
            fill(nums.begin() , nums.begin() + mp[0], 0);
            fill(nums.begin() + mp[0] , nums.begin() + mp[0] + mp[1], 1);
            fill(nums.begin() + mp[0] + mp[1] , nums.end() , 2);
}
};