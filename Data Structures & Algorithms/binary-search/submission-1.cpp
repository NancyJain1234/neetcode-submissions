class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int i = 0 , r= n - 1;
        while(i <= r){
            int mid = i + (r - i)/ 2;
            if(nums[mid] == target) return mid;
            else if(nums[mid] < target) i = mid + 1;
            else r = mid - 1;
        }
        return -1;
    }
};
