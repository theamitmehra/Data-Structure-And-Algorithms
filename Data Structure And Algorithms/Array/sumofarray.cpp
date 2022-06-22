#include<iostream>
using namespace std;

int main(){

    int arr[5] = {5, 6, 3, 7, 2};
    int sum =0;

    for(int  i = 0; i<5; i++){

        sum = sum + arr[i];
    }

    cout<<sum<<endl;

    return 0;
}