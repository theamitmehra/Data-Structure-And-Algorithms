#include<iostream>
using namespace std;


// void swap(int* a, int* b){  //using pointers
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

void swap(int* a, int* b){  //using pointers
    int temp = *a;
    *a = *b ;
    *b = temp;
}

int main(){

    int arr[] = {1, 2, 3};

    // swap(arr[0], arr[2]);
    swap(&arr[0], &arr[2]);
    cout<<arr[0]<<" "<<arr[1]<< " "<<arr[2];

    return 0;
}
