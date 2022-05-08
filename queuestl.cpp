#include <iostream>
#include <queue>
using namespace std;

int main()
{

    queue<int> q;

    q.push(9);
    q.push(80);

    cout << q.size() << endl;

    cout << q.front() << endl;
}