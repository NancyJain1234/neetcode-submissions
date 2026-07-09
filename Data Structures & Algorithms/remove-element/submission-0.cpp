class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        int j = 0;
        while(j < n){
            if(nums[j] == val){
                nums[j] = nums[--n];
            }else{
                j++;
            }
        }
        return n;
    }
};