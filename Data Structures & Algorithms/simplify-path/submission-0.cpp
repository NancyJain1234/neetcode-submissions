class Solution {
public:
    string simplifyPath(string path) {
        stack<string> st;
        string curr = "";

        for (int i = 0; i <= path.size(); i++) {
            if (i == path.size() || path[i] == '/') {
                if (curr == "..") {
                    if (!st.empty()) st.pop();
                }
                else if (curr != "" && curr != ".") {
                    st.push(curr);
                }
                curr = "";
            }
            else {
                curr += path[i];
            }
        }

        vector<string> temp;
        while (!st.empty()) {
            temp.push_back(st.top());
            st.pop();
        }

        string ans = "";
        for (int i = temp.size() - 1; i >= 0; i--) {
            ans += "/" + temp[i];
        }

        return ans.empty() ? "/" : ans;
    }
};