#include <iostream>
#include <set>

using namespace std;

int main()
{

    set<int> s; // set are ds in which all element are  unique there are no duplicate element

    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(6);
    cout << "set: ";
    for (auto i : s)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << s.size() << endl;

    cout << "5 present or not " << s.count(5) << endl;

    set<int>::iterator itr = s.find(5);

    for (auto it = itr; it != s.end(); it++)
    {
        cout << *it << " ";
    }

    cout << endl;
}