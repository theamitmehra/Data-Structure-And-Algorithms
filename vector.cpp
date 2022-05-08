// vector stl  : vector is dynamic array which doubles its size when array becomes complete

#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<int> v;

    v.push_back(9); // push_back used for adding element;

    v.push_back(5);
    v.push_back(4);

    int n = v.size(); // size() tells us how many element are there in vector

    cout << n << endl;

    int m = v.capacity();
    cout << m << endl;

    cout << v.front() << endl;

    cout << v.back() << endl;

    for (int i : v)
    {
        cout << i << " ";
    }
    cout << endl;

    // you can initialize vector like this too : vector<int> v
    vector<int> a(5, 1);
    for (int i : a)
    {
        cout << i << " ";
    }

    cout << endl;

    // you can copy vector like this: vector<int> copy(a);

    vector<int> copy(a);

    for (int i : copy)
    {
        cout << i << " ";
    }
    cout << endl;
}