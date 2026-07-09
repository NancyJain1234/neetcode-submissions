class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];
        int n = strs.size();
        for(int i = 1 ; i < n ; i++){
            string word = strs[i];
            int j = 0;
            while( j < word.length() && prefix[j] == word[j]){
                j++;
            }
            prefix = prefix.substr(0 , j);
            if(prefix == "") {
                return "";
            }
        }
        return prefix;
    }
};