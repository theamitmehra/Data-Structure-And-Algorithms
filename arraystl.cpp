#include<iostream>
#include<array>

using namespace std;

int main(){

    array <int, 5> arr{1, 2, 3 , 4 , 5};

    cout<<arr.at(3);     //use at for accessing data at any index

    cout<<endl<<arr.back()<<endl;   //use back for accessing last element
    
    for(int  i: arr){
        cout<<i<<" ";
    }

    cout<<endl;

    for (int i = 0; i < arr.size(); i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;

    

}