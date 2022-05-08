#include<iostream>
using namespace std;

int main(){

    //logical operator like && AND OPERATOR, || OR OPERATOR, ! NOT OPERATOR

    int age = 18;
    int weight = 65;

    if (age == 18 && weight == 65)
    {
        cout<<"you are healthy"<<endl;
    }

    
    if (age >=18 || age<= 18 )
    {
        cout<<"you are teen"<<endl;
    }

    if (weight != 70)
    {
        cout<<"you are fit"<<endl;
    }
    
    

     return 0;
}