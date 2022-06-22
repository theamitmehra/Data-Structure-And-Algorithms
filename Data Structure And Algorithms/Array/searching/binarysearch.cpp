#include<iostream>
using namespace std;


void binSearch(int arr[], int size , int key){

    int s = 0, e = (size -1), mid = (s + e)/ 2;

    while (s <= e)
    {
        if(mid[arr] == key){
            cout<<key<<"is present"<<endl;
            return;
        }

        else if (key > arr[mid])
        {
            s = mid +1;
        }

        else{

            e = mid -1;
        }
        
        mid = (s + e)/ 2;

    }
    
    cout<<key<<" is not present"<<endl;
}

int main(){

    int arr[5] = {1, 2, 3, 4 , 5};

    int key;
    cin>>key;

    binSearch(arr, 5, key);

    return 0;
    


}