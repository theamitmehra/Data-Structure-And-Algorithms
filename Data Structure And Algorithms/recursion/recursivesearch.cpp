#include<iostream>
using namespace std;

bool binarySearch(int *arr, int s, int e, int k){

    //base case

    if (s > e)
    {
        /* code */
        return false;
    }

    int mid = s + (e -s)/ 2;

    if (arr[mid]  == k)
    {
        /* code */
        return true;
    }

    if (arr[mid ] < k)
    {
        return binarySearch(arr, mid +1, e, k);

    }
    else{
        return binarySearch(arr, s, mid -1, k);
    }
    
    
    
}
int main(){

    int arr[ 10] = { 1, 2, 3 , 4, 5, 6, 7, 8, 9, 10 };



    int s = 0;
    int e = 9;

    int k;
    cin>>k;

    if(binarySearch(arr, s, e, k)){
        cout<<"present hai"<<endl;
    }else
    cout<<"nahi hai"<<endl;

    return 0;


}