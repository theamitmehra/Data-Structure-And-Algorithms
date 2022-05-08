#include<iostream>
using namespace std;
//brute force approach

//what is a prime number?
// prime number is a number which can be divided by any number except 1 and the number it self
//time complexity of this algo is : O(n)
bool isprime(int n){

    if (n<= 1)
    {
        return false;
        /* code */
    }

    for (int i = 2; i < n; i++)
    {
        /* code */
        if (n%i == 0)
        {
            return false;
            /* code */
        }
        
    }

    return true;
    
}



int main(){

    int n;
    cin>>n;

    if (isprime(n))
    {
        cout<<"it is a prime number"<<endl;
        /* code */
    }else{
        cout<<"its not a prime number"<<endl;
    }

    
    

}