#include<iostream>
#include<math.h>
using namespace std;

int sqrtofNUM(int x){

    int start = 0;
    int end = x;

    while(start <= end)
    { 

        // find mid

        int mid = start + (end - start)/ 2;
        if(mid * mid == x)
        {
            return mid;
        }
        else if(mid * mid > x)
        {
            end = mid -1;
        }
        else
        { 
            start = mid +1;
        }

        
    }

    return end;

}

int main(){

    int n ;
    cout << "enter a number";
    cin >> n;

    cout<< "ans is " <<sqrt(n)<<endl;

    // cout<<"ans is "<<sqrtofNUM(n)<<endl;

    return 0;
}