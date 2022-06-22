#include <iostream>
using namespace std;

// in bubble sort we place the largest element in array at every round
void bubbleSort(int *arr, int size)
{
    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

int main()
{

    int size = 5;
    int arr[size] = {64, 25, 12, 22, 11};

    bubbleSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}