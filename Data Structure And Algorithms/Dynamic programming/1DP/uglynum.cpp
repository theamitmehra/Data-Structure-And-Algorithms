// ugly numbers are that can be divided only 2, 3 and 5.
// ?dynamic programming

#include <bits/stdc++.h>
using namespace std;

int maxDivide(int a, int b)
{
    while (a % b == 0)
    {
        a = a / b;
        /* code */
    }
    return a;
}

int isUgly(int no)
{
    no = maxDivide(no, 2);
    no = maxDivide(no, 3);
    no = maxDivide(no, 5);

    return (no == 1) ? 1 : 0;
}

int getNthUglyNo(int n)
{
    int i = 1;

    // ugly number count
    int count = 1;

    // check all the integers untilugly count becomes n

    while (n > count)
    {
        /* code */
        i++;
        if (isUgly(i))
        {
            count++;
        }
    }

    return i;
}

int main()
{

    unsigned no = getNthUglyNo(150);

    cout << "150th ugly number is " << no << endl;
    return 0;
}
