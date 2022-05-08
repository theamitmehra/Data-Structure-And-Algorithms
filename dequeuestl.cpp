#include<iostream>
#include<deque>
using namespace std;

int main(){

    deque<int> d;

    d.push_back(9);
    d.push_front(8);

    for (int i : d)
    {
        cout<<i<<" ";
    }

    cout<<endl;

    d.pop_back();

    for (int i : d)
    {
        cout<<i<<" ";
    }

    cout<<endl;
    d.push_back(9);

    cout<<d.at(1);

    d.erase(d.begin(), d.begin() +1);

    cout<<endl;
    
    for (int i : d)
    {
        cout<<i<<" ";
    }

    
}