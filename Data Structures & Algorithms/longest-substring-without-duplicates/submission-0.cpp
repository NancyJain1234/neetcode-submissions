class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int len = 0 , n = s.length() , left = 0;
        for(int i = 0 ; i < n ; i++){
            while(st.count(s[i])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[i]);
            len = max(len , i - left+ 1);
        }
        return len;
    }
};
