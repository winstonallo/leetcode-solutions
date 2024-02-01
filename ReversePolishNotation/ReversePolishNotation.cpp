class Solution {

    public:
        int evalRPN(vector<string>& tokens) {
            stack<int> stk;
            int n = tokens.size();

            for (int i = 0; i < n; i++) {
                if (operand(tokens[i]) == true) {
                    int num2 = stk.top();
                    stk.pop();
                    int num1 = stk.top();
                    stk.pop();
                    if (tokens[i] == "+")
                        stk.push(num1 + num2);
                    else if (tokens[i] == "-")
                        stk.push(num1 - num2);
                    else if (tokens[i] == "*")
                        stk.push(num1 * num2);
                    else if (tokens[i] == "/")
                        stk.push(num1 / num2);
                } 
                else
                    stk.push(stoi(tokens[i]));
            }
            return stk.top();
        }

    private:
        bool    operand(string s) {
            return s == "*" || s == "/" || s == "+" || s == "-";
        }
};
