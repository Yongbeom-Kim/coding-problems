class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        vector<int> stack;
        for (auto it = tokens.begin(); it != tokens.end(); it ++) {
            string token = *it;

            if (token == "+") {
                int op2 = stack.back();stack.pop_back();
                int op1 = stack.back();stack.pop_back();
                stack.push_back(op1 + op2);
            } else if (token == "-") {
                int op2 = stack.back();stack.pop_back();
                int op1 = stack.back();stack.pop_back();
                stack.push_back(op1 - op2);
            } else if (token == "*") {
                int op2 = stack.back();stack.pop_back();
                int op1 = stack.back();stack.pop_back();
                stack.push_back(op1 * op2);
            } else if (token == "/") {
                int op2 = stack.back();stack.pop_back();
                int op1 = stack.back();stack.pop_back();
                stack.push_back(op1/op2);
            } else {
                stack.push_back(stoi(token));
            }
        }

        return stack.back();
    }
};