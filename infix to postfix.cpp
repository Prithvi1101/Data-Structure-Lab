#include <iostream>
#include <bits/stdc++.h>
#include <stack>
using namespace std;
int prec(char a)
{
    if (a == '^')
    {
        return 3;
    }
    else if (a == '*' || a == '/')
    {
        return 2;
    }
    else if (a == '+' || a == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}
string infixtopostfix(string s)
{
    string res = "";
    stack<char> basket;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == '(')
        {
            basket.push(s[i]);
        }
        else if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            res += s[i];
        }
        else if (s[i] == ')')
        {
            while (!basket.empty() && basket.top() != '(')
            {
                res += basket.top();
                basket.pop();
            }
            if (!basket.empty())
            {
                basket.pop();
            }
        }
        else
        {
            while (!basket.empty() && prec(basket.top()) > prec(s[i]))//precedence of current operator should be greater than top oper pop korte thakbo
            {
                res += basket.top();
                basket.pop();
            }
            basket.push(s[i]);
        }
    }
    while (!basket.empty())
    {
        res += basket.top();
        basket.pop();
    }

    return res;
}
int main()
{
    string infix;
    cout<<"Type the infix statement:"<<endl;
    getline(cin,infix);
    cout << infixtopostfix(infix);
    return 0;
}
