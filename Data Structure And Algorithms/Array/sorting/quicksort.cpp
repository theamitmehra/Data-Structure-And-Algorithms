#include <iostream>
using namespace std;

int partition(int arr[], int s, int e)
{

    // int pivot = arr[s];
    // int count = 0;

    // for (int i = s + 1; i <= e; i++)
    // {
    //     if (arr[i] <= pivot)
    //     {
    //         count++;
    //     }
    // }

    // place pivot at right position

    // int pivIndex = s + count;

    // swap(arr[pivIndex], arr[s]);

    // int i = s, j = e;

    // while (i < pivIndex && j > pivIndex)
    // {
    //     while (arr[i] <= pivot)
    //     {
    //         i++;
    //     }

    //     while (arr[j] > pivot)
    //     {
    //         j--;
    //     }

    //     if (i < pivIndex && j > pivIndex)
    //     {
    //         swap(arr[i++], arr[j--]);
    //     }
    // }
    // return pivIndex;

    int pivot = arr[s];
    int cnt = 0;

    for(int i = s +1; i<= e; i++){
        if (arr[i] <= pivot)
        {
            cnt++;
        }
        
    }

    int indexPivot = s+cnt;
    swap(indexPivot[arr], arr[s]);
    int i = s, j = e;

    while (i < indexPivot && j> indexPivot)
    {
        while (arr[i] <= pivot)
        {
            i++;
        }

        while (arr[j] >= pivot)
        {
            j--;
        }

        if (i < indexPivot && j > indexPivot)
        {
            swap(arr[i++], arr[j--]);
        }
        
    }
    return indexPivot;
}

void quicksort(int arr[], int s, int e)
{

    if (s >= e)
    {
        return;
    }

    int p = partition(arr, s, e);

    // left part

    quicksort(arr, s, p - 1);

    // right part

    quicksort(arr, p + 1, e);

}

int main()
{

    int arr[5] = {2, 4, 1, 6, 9};

    int n = 5;

    quicksort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}


