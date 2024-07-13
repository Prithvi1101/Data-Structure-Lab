#include <bits/stdc++.h>
using namespace std;

int sign(char c) {
	if (c == '^')
		return 3;
	else if (c == '/' || c == '*')
		return 2;
	else if (c == '+' || c == '-')
		return 1;
	else
		return -1;
}


string infixToPostfix(string s) {
	stack<char> basket;
	string p;
	s = "(" + s + ")";
	for (int i = 0; i < s.size(); i++) {
		if (s[i] == ' ') {
			continue;
		}
		if (s[i] >= '0' && s[i] <= '9') {
			while (s[i] >= '0' && s[i] <= '9') {
				p += s[i++];
			}
			p += ' ';
			i--;
		} else if (s[i] == '(') {
			basket.push(s[i]);
		} else if (s[i] == ')') {
			while (basket.top() != '(') {
				p += basket.top();
				p += ' ';
				basket.pop();
			}
			basket.pop();
		} else {
			while (!basket.empty() && sign(basket.top()) >= sign(s[i])) {
				p += basket.top();
				p += ' ';
				basket.pop();
			}
			basket.push(s[i]);
		}
	}
	return p;
}

double calculatePostfix(string s) {
	stack<double> st;
	string temp;

	for (int i = 0; i < s.length(); i++) {
		if (s[i] == ' ') continue;
		if (s[i] >= '0' && s[i] <= '9') {
			double number = 0;
			while (i < s.length() && s[i] >= '0' && s[i] <= '9') {
				number = number * 10 + (s[i] - '0');
				i++;
			}
			i--;
			st.push(number);
		} else {
			double op2 = st.top();
			st.pop();
			double op1 = st.top();
			st.pop();

			switch (s[i]) {
			case '+':
				st.push(op1 + op2);
				break;
			case '-':
				st.push(op1 - op2);
				break;
			case '*':
				st.push(op1 * op2);
				break;
			case '/':
				st.push(op1 / op2);
				break;
			case '^':
				st.push(pow(op1, op2));
				break;
			}
		}
	}

	return st.top();
}

int main() {
	string s;
	cout << "Enter infix expression: ";
	cin >> s;

	cout << "Convert infix to postfix: ";
	string postfix = infixToPostfix(s);
	cout << postfix << endl;

	cout << "Calculation result: ";
	cout << calculatePostfix(postfix) << endl;

	return 0;
}