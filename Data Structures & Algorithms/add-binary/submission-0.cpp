class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";
        int carry = 0;
        int n = a.size() - 1 , m = b.size() - 1;
        while(n >= 0 || m >= 0 || carry){
            int digit1 = n >= 0 ? a[n] - '0' : 0;
            int digit2 = m >= 0 ? b[m] - '0' : 0;
            int sum = digit1 + digit2 + carry;
            carry = sum / 2;
            res += (sum % 2) + '0';
            n--;
            m--;
        }
        reverse(res.begin() , res.end());
        return res;
    }
};