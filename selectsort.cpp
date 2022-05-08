#include<iostream>
using namespace std;


void selectSort(int arr[], int count){

    for (int i = 0; i < count; i++)
    {
        int min = i;

        for (int j = i + 1 ; j<count; j++)
        {
            /* code */

            if (arr[j] < arr[min])
            {
                min= j;
            }
            
        }

        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;
        
    }
    
}
int main(){
    int size = 5;
    int arr[size] = {64, 25, 12, 22, 11};

    printf("array is: ");

    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    selectSort(arr, size);

    printf("sorted array is: ");
    for (int i = 0; i < 5; i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;

    return 0;
    
}