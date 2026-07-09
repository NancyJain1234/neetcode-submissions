class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> res;
        int n = nums.size();
        int k = 0, r = 0;
        sort(nums.begin() , nums.end());
        for(int i = 0 ; i < n - 3 ; i++){
            if( i > 0 && nums[i] == nums[ i - 1]) continue;
            for(int j = i + 1 ; j < n - 2 ; j ++){
                if(j > i + 1 && nums[j] == nums[j - 1]) continue;
                k = j + 1 ;
                r = n - 1;
                while(k < r){
                    long long sum = (long long) nums[i] + nums[j] + nums[k] + nums[r];
                    if(sum == target){
                        res.push_back({nums[i] , nums[j] , nums[k] , nums[r]});
                        k++;
                        r--;
                        while(k < r && nums[k] == nums[k - 1]) k++;
                        while(k < r && nums[r] == nums[r + 1]) r--;
                    }else if(sum > target) r--;
                    else k++; 
                }
            }
        }
        return res;
    }
};