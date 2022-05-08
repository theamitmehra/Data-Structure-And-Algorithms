#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    cout<<"pattern using for loop "<<endl;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout<<i;
        }
        cout<<endl;
    }

    //use can use while loop as well
    cout<<endl<<"pattern using while loop "<<endl;
    int i = 1;

    while(i<=n) {

        int j = 1;
        while(j<=n) {
            cout << i;
            j = j + 1;
        }
        cout<<endl;
        i = i+1;
    }
    
    
    return 0;
}