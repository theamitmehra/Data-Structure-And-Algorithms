#include <iostream>
#include <queue>
using namespace std;

class heap
{

public:
    int *arr;
    int size;

    heap()
    {
        arr[0] = -1;
        size = 0;
    }

    void insert(int val)
    {

        size++;

        int index = size;

        arr[index] = val;

        while (index > 1)
        {

            int parent = index / 2;

            if (arr[parent] < arr[index])
            {
                swap(arr[parent], arr[index]);
                index = parent;
            }
            else
            {
                return;
            }
        }
    }

    void print()
    {
        for (int i = 1; i <= size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletefromheap()
    {

        if (size == 0)
        {
            cout << "nothing to delete";
            return;
        }
        //      step 1: put last element on first index and decrease the size so noone can acess the last element
        arr[1] = arr[size];
        size--;
        //      step 2: initialise i with first index
        int i = 1;

        while (i < size)
        {

            int leftindex = 2 * i;      // index of left child
            int rightindex = 2 * i + 1; // index of right child

            if (leftindex < size && arr[i] < arr[leftindex])
            { // check if left child is greater than parent then simply swap them
                swap(arr[i], arr[leftindex]);
            }
            else if (rightindex < size && arr[i] < rightindex[arr])
            { // check if right child is greater than parent then simply swap them
                swap(arr[i], arr[rightindex]);
            }
            else
            { // else case : do nothing
                return;
            }
        }
    }
};

// time complexity : O(logn)
void heapify(int *arr, int n, int i)
{

    int largest = i;
    int left = 2 * i;
    int right = 2 * i + 1;

    if (left <= n && arr[largest] < arr[left])
    {

        largest = left;
    }

    if (right <= n && arr[largest] < arr[right])
    {
        largest = right;
    }

    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        heapify(arr, n, largest);
    }
}

void heapsort(int arr[], int n) // timecomplexity: O(nlogn)
{                               //

    int size = n;

    while (size > 1)
    {
        // step 1: swap
        swap(arr[size], arr[1]);
        size--;

        // step 2: heapify the
        heapify(arr, size, 1);
    }
}
int main()
{

    // heap h1;
    // h1.insert(45);
    // h1.insert(78);
    // h1.insert(34);
    // h1.insert(89);

    // h1.print();

    // h1.deletefromheap();

    // cout<<endl<<"after deletetion ";
    // h1.print();

    // int arr[6] = {-1, 54, 53, 55, 52, 50};

    // int n = 5;

    // for (int i = n / 2; i > 0; i--)
    // {
    //     heapify(arr, n, 1);
    // }

    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // cout << endl;

    // heapsort(arr, n);

    // cout << "heapsort: ";
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;

    priority_queue<int> pq; // max
    pq.push(1);
    pq.push(4);
    pq.push(5);
    pq.push(3);

    cout << pq.top() << endl;
    cout << pq.empty() << endl;

    // min heap

    priority_queue<int, vector<int>, greater<int>> minheap;

    minheap.push(1);
    minheap.push(4);
    minheap.push(5);
    minheap.push(3);

    cout << minheap.top() << endl;
    cout << minheap.empty() << endl;

    return 0;
}