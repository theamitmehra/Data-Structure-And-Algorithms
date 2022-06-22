#include<bits/stdc++.h>
using namespace std;
#define n count

void subarray(int arr[], int n)
{
    for (int i = 0; i < count; i++)
    {
        for (int j = i; j < count; j++)
        {
            for (int k = i; k <= j; k++)
            {
                cout<<arr[k]<<" ";
            }
            cout<<endl;
            
        }
        
    }
    
}

int main(){

    int arr[] = {5, 4, 8, 7, 2};

    subarray(arr, 5);

    return 0;

}