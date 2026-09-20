class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int>st;
        for(auto x:tokens){
            if (x != "+" && x != "-" && x != "*" && x != "/")st.push(stoi(x));
            else{
                string op=x;
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                if(op=="+"){
                    st.push(a+b);
                }
                else if (op=="-")st.push(b-a);
                else if(op=="*")st.push(a*b);
                else st.push(b/a);
            }
        }
        return st.top();
    }
};
