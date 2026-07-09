class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int res = 0 , currsum = 0 ;
        unordered_map<int , int> sum;
        sum[0] = 1;
        for(int num : nums){
            currsum += num;
            int diff = currsum - k;
            res += sum[diff];
            sum[currsum]++;
        }
        return res;
    }
};