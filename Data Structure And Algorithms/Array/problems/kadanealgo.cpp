#include <bits/stdc++.h>
using namespace std;
#define count n

// ! this algorithms is used to find max sub-array

int kadaneAlgorithm(int *arr, int n)
{
    int max_elements = 0;
    int max_sum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        max_elements = max_elements + arr[i];
        if (max_elements > max_sum)
            max_sum = max_elements;
        if (max_elements < 0)
            max_elements = 0;
    }
    return max_sum;
}

int main()
{

    int arr[] = {5, 4, 7, 0, 1};

    cout << kadaneAlgorithm(arr, 4);

    return 0;
}