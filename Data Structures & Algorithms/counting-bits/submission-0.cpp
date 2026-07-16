class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int j = 0 ; j <= n ; j++){
            int i = j , res = 0;
            while(i != 0 ){
                res += (i & 1);
                i >>= 1;
            }
            ans.push_back(res);
        }
        return ans;
    }
};
