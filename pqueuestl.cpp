#include<iostream>
#include<queue>

using namespace std;

int main(){
    priority_queue<int> max;  //same as max heap

    max.push(1);
    max.push(3);
    max.push(2);
    max.push(0);

    

    int n = max.size();
    for (int i = 0; i < n; i++)
    {
        cout<<max.top()<<" ";
        max.pop();
    }
    cout<<endl;

    priority_queue <int,vector<int>, greater<int> > min;//same as min heap

    min.push(5);
    min.push(1);
    min.push(0);
    min.push(4);
    min.push(3);

    int m = min.size();

    for (int i = 0; i < m; i++)
    {
        cout<<min.top()<<" ";
        min.pop();
    }
    
    cout<<endl;

    cout<<max.empty()<<endl;

    cout<<min.empty()<<endl;


}