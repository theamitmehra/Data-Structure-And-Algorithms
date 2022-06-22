#include<iostream>
using namespace std;

int main(){

    int a= 4;
    int b= 6;

    cout<<"a&b "<<(a&b)<<endl;      //AND OPERATOR
    cout<<"a|b "<<(a|b)<<endl;      //OR OPERATOR
    cout<<"~a "<<~a<< endl;          //NOT OPERATOR
    cout<<"a^b "<<(a^b)<<endl;      //XOR OPERATOR

    cout<<(17>>1)<<endl;       //left shift op          
    cout<<(17>>2)<<endl;
    cout<<(19<<2)<<endl;       //right shift op
    cout<<(21<<2)<<endl;

    int i =5;

    cout<<(++i)<<endl;     //pre increment
    cout<<(i++)<<endl;     //post incremnet
    cout<<(--i)<<endl;     // pre decrement
    cout<<(i--)<<endl;      //post decrement




    return 0;
}