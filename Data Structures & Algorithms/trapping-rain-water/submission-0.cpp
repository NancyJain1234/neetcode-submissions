class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        int l = 0 , r = n - 1 , maxl = 0 , maxr = 0 , water =0;
        while(l <= r){
            maxl = max ( maxl , height[l]);
            maxr = max(maxr , height[r]); 
            if(maxl < maxr){
                water += maxl - height[l];
                l++;
            }else{
                water += maxr - height[r];
                r--;
            }
        }
        return water;
    }
};
