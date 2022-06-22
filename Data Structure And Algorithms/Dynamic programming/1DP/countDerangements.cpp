#define mod 1000000007
#include<bits/stdc++.h>
// recursive solution
// long long int solveRec(int n){
    
//     //   base case
//     if(n == 1 || n == 2){
//         return (n - 1);
//     }
    
//     int ans = (n-1) %mod * ((countDerangement(n-1) %mod) + (countDerangement(n-2) %mod))%mod;
    
//     return ans;
// }
// memoization solution

// long long int solveMem(int n, vector<long long int>& dp){

//     // base case
//     if(n == 1)
//         return 0;
    
//     if(n == 2)
//         return 1;

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n] = ((n -1)%mod )* ((solveMem(n -1, dp)%mod) + (solveMem(n-2, dp)%mod))%mod;

//     return dp[n];

// }

// tabulation solution

// long long int solveTab(int n){
    
//     vector<long long int> dp(n+1, 0);
    
//     dp[1] = 0;
//     dp[2] = 1;
    
//     for(int i = 3; i <= n; i++){
//         dp[i] = ((i -1)%mod * ((dp[i-1]%mod) + (dp[i-2]%mod))%mod);
//     }
    
//     return dp[n];

// }

// space optimization soln:
#define lli long long int
long long int optSol(int n){
    
    lli first = 0;
    lli second = 1;
    lli third = 0;
    
    for(int i = 3; i <= n; i++){
        third = ((i -1)%mod * ((second%mod) + (first%mod))%mod);
        first = second;
        second = third;
    }
    
    return third;
}

long long int countDerangement(int n) {
//     vector<long long int> dp(n+1, -1);
//     return solveMem(n, dp);
    return optSol(n);
}