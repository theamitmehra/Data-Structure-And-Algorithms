#include<iostream>
using namespace std;

int factorial(int n){
    
    if (n == 0){
        return 1;
    }

    return n* factorial(n -1);
    
}

int ncr(int n, int r){
    int num = factorial(n);

    int denom = factorial(r) * factorial(n-r);

    return num/denom;

}

int main()
{

    int n, r;

    cin>>n>>r;

    cout<<"answer is "<<ncr(n, r);



    return 0;
}