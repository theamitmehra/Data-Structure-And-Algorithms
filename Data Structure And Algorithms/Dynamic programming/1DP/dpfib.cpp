#include<bits/stdc++.h>
using namespace std;

// int fib(int n){      //not optimal

//     if(n <= 1)
//     {
//         return n;
//     }

//     return fib(n - 1) + fib(n - 2);

// }

// optimal code

// class  GFG{

//     public:

//     int fib(int n){
        

//         //ek array banao fib store krne k lie

//         int f[n+2];

//         int i ;

//         f[0] = 0;
//         f[1] = 1;

//         for (int i = 2; i <= n; i++)
//         {
//             // add the privous 2 number int the series and store it
//             f[i] = f[i-1] + f[i-2];
//         }

//         return f[n];
        
//     }
// };

// int fib (int n){
//     int a =0, b =1, c ;

//     if(n == 0)
//     return a;

//     for (int i = 2; i <= n; i++)
//     {
//         c = a +b;
//         a = b;
//         b = c;

//     }

//     return b;
    
// }

int dp[10];

int fib(int n)
{
    if(n <= 1){
        return n;
    }

    // temporary var to store val of fib(n-1)  and fib(n-2);

    int first, second;

    if(dp[n-1 ] != -1)
    {
        first = dp[n-1] ;
    }
    else{
        first = fib(n-1);

        if(dp[n-2] != -1)
        {
            second = dp[n-2];

        }
        else{
            second = fib(n-2);
        }
    }
    return dp[n] = first + second;
}

int main(int argc, char **argv, char **envp){

    // using recursion

    // int n; cin>>n;

    // cout<<fib(n)<<endl;

    // GFG g;

    // int n =9;

    // cout<< g.fib(n);

    // return 0;

    // int n =9;

    // cout<< fib(n);


    // !this is how better comment are used
    

    int n = 9;

    memset(dp, -1, sizeof(dp));
    cout<<fib(n);


    // getchar();
    return 0;


}