#include<iostream>
using namespace std;

#define rep(i, n) for(int i = a ; i< n; i++)

#define w(i , a, n)   while((i=a)<n)

void insertSort(int arr[], int n){

    for (int i = 1; i < n; i++)    //ek loop 1 se n chalana hain 
    {
        int temp = arr[i];         //temp ko arr[i] ke barabar rkhna hai

        int j =  i-1;            //j ko i -1 se initialize krna h

        for (; j >=0;  j--)            //ek loop j se i -1 tk chalana hain 
        {
            if (arr[j]> temp)         //
            {
                //shift

                arr[j+1] = arr[j];

            }
            else{
                break;
            }
            
        }
        
        arr[j+1] = temp;
    }
    
}
int main(){

    int arr[5] = {5, 4, 8, 7, 2 };

    int arr1[5] = {6, 5, 4 , 3 , 2};



    int size = 5;

    insertSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";

    }

    cout<<endl;

    insertSort(arr1, 5);
    for (int i = 0; i < size; i++)
    {
        cout<<arr1[i]<<" ";

    }
    /*int i = 0 ;
    while(i < 5)
    {
        cout<<"hwll"<<endl;
        i++;
    }*/
    

    return 0;
    

}