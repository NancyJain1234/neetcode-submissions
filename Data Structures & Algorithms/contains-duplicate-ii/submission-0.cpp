class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size() ;
        for(int i = 0 ; i < n ; i++){
            int j = i + 1;
            while(j < n){
                if(nums[i] == nums[j] && abs(i - j) <= k) return true;
                j++;
            }
        }
        return false;
    }
};