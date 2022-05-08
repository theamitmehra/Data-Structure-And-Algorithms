#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int prefixevalution(string s){

    stack<int> st;

    for (int i = st.size(); i >= 0; i--)
    {
        if(s[i] >= '0' && s[i] <= '9'){
            st.push(s[i] -0);

        }else{

            int op1 = st.top();
            st.pop();
            int op2 = st.top();
            st.pop();

            switch (s[i])
            {
            case '+':
                st.push(op1 + op2);
                break;
            case '-':
                st.push(op1 - op2);
                break;

            case '/':
                st.push(op1 / op2);
                break;

            case '*':
                st.push(op1 * op2);
                break;

            case '^':
                st.push(op1 ^ op2);
                break;

            default:
                break;
            }
        }
    }
    return st.top();
}

int main(){

    cout<<prefixevalution("-+7*45+20");

    cout<<endl;

    return 0;
}