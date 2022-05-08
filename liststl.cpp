//list is based on doubly linked list

#include<iostream>
#include<list>

using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    for(int i: l){
        cout<<i<<" ";

    }
    cout<<endl;

    l.erase(l.begin());

    for(int i: l){
        cout<<i<<" ";

    }
    cout<<endl;

    cout<<l.size();

    cout<<endl;
    
    // we can initialise list like this too : list<int> a(5, 100);

    list<int> a(5, 100);

    for (int i: a)
    {
        cout<<i<< " ";
    }
    






}