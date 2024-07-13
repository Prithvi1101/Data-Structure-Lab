#include<iostream>
#include<stack>
#include<math.h>
using namespace std;
int postfixEvaluation(string s)
{
    stack<int>basket;
    for(int i=0;i<s.length();i++)
    {

        if(s[i]>='0' && s[i]<='9')
        {
            basket.push(s[i]);
        }
        else{
            int top=basket.top();
            basket.pop();
            int next_to_top=basket.top();
            basket.pop();

            switch(s[i])
            {
            case '+':
                basket.push(next_to_top+top);
                break;

                case '-':
                basket.push(next_to_top-top);
                break;

                case '*':
                basket.push(next_to_top*top);
                break;

                case '/':
                basket.push(next_to_top/top);
                break;
                case '^':
                basket.push(pow(next_to_top,top));
                break;
            }
        }
    }

}

int main()
{

    string postfix;
    cout<<"Type the postfix statement:"<<endl;
    getline(cin,postfix);
    cout << postfixEvaluation(postfix);
    return 0;
}
