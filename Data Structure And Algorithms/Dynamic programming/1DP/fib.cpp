#include <bits/stdc++.h>
using namespace std;


// recursion

int fibrec(int n){
    if(n == 0 || n == 1){
        return n;
    }



    int ans = fibrec(n -2) + fibrec(n -1);
    return ans;
}

int fibmem(int n, vector<int> &dp){
    if(n == 0 || n == 1){
        return n;
    }



    dp[n] = dp[n-1] + dp[n -2];
    return dp[n];
}

// using tab

int fibTab(int n){

    vector<int> dp;

    dp[0] = 0;
    dp[1] = 1;

    for (int i = 2; i <= n; i++)
    {
        dp[i] = dp[i -1] + dp[i -2];
    
    }

    return dp[n];
    
}

// space optimize solution

int fibopt(int n){
    
    int n = 10;
    int a = 0;
    int b = 1;

    for (int i = 1; i <= n; i++)
    {
        int num = a + b;
        cout << num << " ";

        a = b;
        b = num;
    }

    return b;

}

int main()
{
    

    return 0;
}