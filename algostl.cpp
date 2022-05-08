#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
int main()
{

    vector<int> v;

    v.push_back(1);
    v.push_back(3);
    v.push_back(6);
    v.push_back(7);

    //    cout<<binary_search(v.begin(), v.end(), 6);

    // lower bound

    cout << "lower bound " << lower_bound(v.begin(), v.end(), 6) - v.begin() << endl;
    cout << "upper bound " << upper_bound(v.begin(), v.end(), 4) - v.begin() << endl;

    int a = 2;
    int b = 3;

    cout << max(a, b) << endl;

    cout << min(a, b) << endl;

    swap(a, b);

    cout << endl
         << "a " << a << endl;

    string abcd = "abcd";

    reverse(abcd.begin(), abcd.end());

    cout << abcd << endl;

    rotate(v.begin(), v.begin() + 1, v.end());

    cout << "after rotate " << endl;

    for (int i : v)
    {
        /* code */

        cout << i << " ";
    }
    sort(v.begin(), v.end());
    cout << endl;

    for (int i : v)
    {
        /* code */

        cout << i << " ";
    }
}