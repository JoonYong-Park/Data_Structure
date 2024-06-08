#include <iostream>
#include <stack>
#include <string>

using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') {
        return 1;
    }
    else if (op == '*' || op == '/') {
        return 2;
    }
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> stk;
    string postfix = "";

    for (char& ch : infix) {
        if (isdigit(ch)) {
            postfix += ch;
        }
        else if (ch == '(') {
            stk.push(ch);
        }
        else if (ch == ')') {
            while (!stk.empty() && stk.top() != '(') {
                postfix += stk.top();
                stk.pop();
            }
            stk.pop();  // remove '(' from the stack
        }
        else {
            while (!stk.empty() && precedence(stk.top()) >= precedence(ch)) {
                postfix += stk.top();
                stk.pop();
            }
            stk.push(ch);
        }
    }

    while (!stk.empty()) {
        postfix += stk.top();
        stk.pop();
    }

    return postfix;
}

int main_FFF() {
    string infix = "2+3*4";
    cout << "중위연산: " << infix << endl;
    string postfix = infixToPostfix(infix);
    cout << "후위연산: " << postfix << endl;
    return 0;
}
