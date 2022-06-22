#include <iostream>
using namespace std;

int getPivot(int *arr, int n)
{

    int s = 0;
    int e = n - 1;

    int mid = s + (e - s)/2;

    while (s < e)
    {

        if (arr[mid] >= arr[0])
        { // agar mid pehle element se bada ya barabar h to s to update krdo
            s = mid + 1;
        }
        else
        {
            e = mid; // nahi to end ko update krdo
        }

        mid = s + (e - s) / 2;
    }

    return s;
}


bool binarySearch(int *arr , int s , int e , int key){

    

    int mid = s + (e - s)/2;

    while( s <= e){

        if(arr[mid] == key){
            return true;
        }
        if(key < mid[arr]){
            e = mid -1;
        }
        else{
            s = mid +1;
        }

        mid = s + (e - s) / 2;
    }
    return false;
}

int searchrotatedarray(int *arr, int n, int key){

    int s = 0;
    int e = n -1;

    int pivot = getPivot(arr, n);

    if(key >= arr[pivot] && key <= arr[e]){
        return binarySearch(arr, pivot, e, key);
    }
    else{
        return binarySearch(arr, s, pivot-1, key);
    }
}

int main()
{

    int arr[5] = {5, 6, 1, 2, 3};

    int n = 5;

    

    if(searchrotatedarray(arr, 5, 2)){
        cout<<"present hai"<<endl;
    }
    else{
        printf("nhi hai");
    }

    return 0;
}