class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = nums[0];
        int count = 1 , n = nums.size();
        for(int i = 1 ; i < n ; i++){
            if(count == 0){
                ele = nums[i];
            }else if(nums[i] == ele){
                count++;
            }else{
                count--;
            }
        }
        return ele;
    }
};