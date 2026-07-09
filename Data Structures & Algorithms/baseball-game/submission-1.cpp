class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> st;
        int n = operations.size();
        for(int i = 0 ; i < n ; i++){
            if(operations[i] == "+"){
                int num1 = st.top();
                st.pop();
                int sum = num1 + st.top();
                st.push(num1);
                st.push(sum);
            }else if(operations[i] == "D"){
                int num1 = st.top();
                st.push(num1 * 2);
            }else if(operations[i] == "C"){
                st.pop();
            }else{
                st.push(stoi(operations[i]));
            }
        }
        int sum = 0;
        while(!st.empty()){
            sum += st.top();
            st.pop();
        }
        return sum;
    }
};