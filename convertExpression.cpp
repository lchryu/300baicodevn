#include <iostream>
#include <stack>
#include <algorithm>
#include <string>
#include <cctype>
#include <vector>
using namespace std;

int precedence(char op) {
    if (op == '+' || op == '-') return 1;
    if (op == '*' || op == '/') return 2;
    if (op == '^') return 3;
    return 0;
}

string infixToPostfix(string infix) {
    stack<char> st;
    string postfix;
    for (char& ch : infix) {
        if (isalnum(ch)) postfix += ch;
        else if (ch == '(') {
            st.push(ch);
        }
        else if (ch == ')') {
            while (!st.empty() && st.top() != '(') {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && precedence(st.top()) >= precedence(ch)) {
                postfix += st.top();
                st.pop();
            }
            st.push(ch);
        }
    }
    while (!st.empty()) {
        postfix += st.top();
        st.pop();
    }
    return postfix;
}

string infixToPrefix(string infix) {
    reverse(infix.begin(), infix.end());
    for (char& ch : infix) {
        if (ch == '(') {
            ch = ')';
        }
        else if (ch == ')') {
            ch = '(';
        }
    }
    string postfix = infixToPostfix(infix);
    reverse(postfix.begin(), postfix.end());
    return postfix;
}

int main() {
    vector<string> testCases = {
        "A+B",
        "(A+B)*(C-D)",
        "A+(B*C)",
        "A*(B+C)/D",
        "A+B*(C^D-E)",
        "A-B/C+D*E-F^G"
    };

    for (const auto& infix : testCases) {
        string prefix = infixToPrefix(infix);
        cout << "Infix: " << infix << "\nPrefix: " << prefix << "\n\n";
    }

    return 0;
}
