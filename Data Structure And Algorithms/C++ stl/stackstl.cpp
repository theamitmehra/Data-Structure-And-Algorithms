#include<iostream>
#include<stack>
using namespace std;

int main(){

    stack<int> s;

    s.push(4);
    cout<<s.top()<<endl;

    s.push(8);
    cout<<s.top()<<endl;

    s.pop();

    cout<<s.top()<<endl;

    cout<<s.size()<<endl;

    cout<<s.empty()<<endl;
}