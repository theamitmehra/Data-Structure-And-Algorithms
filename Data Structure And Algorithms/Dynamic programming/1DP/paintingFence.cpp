#include<bits/stdc++.h>
using namespace std;

#define mod (10^9) + 7

int add(int n, int k){
    return((n %mod) + (k %mod) )%mod;
}
int mul(int n, int k){
    return((n %mod) * (k %mod) )%mod;
}

// int solveRec(int n, int k){

//     //base case 
//     if(n == 1){
//         return k;
//     }
//     if(n == 2){
//         // return k + (k * (k - 1));
//         return add(k, mul(k , k -1));
//     }

//     int ans = add(mul(solveRec(n -2, k), k -1), mul(solveRec(n -1, k), k -1));

//     return ans;

// }

// using memorization
// int solveMem(int n, int k, vector<int>& dp){

//     //base case 
//     if(n == 1){
//         return k;
//     }
//     if(n == 2){
//         // return k + (k * (k - 1));
//         return add(k, mul(k , k -1));
//     }

//     if(dp[n] != -1){
//         return dp[n];
//     }

//     dp[n] = add(mul(solveMem(n -2, k, dp), k -1), mul(solveMem(n -1, k, dp), k -1));

//     return dp[n];

// }

// tabulation function 

// int solvetab(int n, int k){
//     vector<int> dp(n + 1, -1);

//     //base case 
//     dp[1] = k;

//     dp[2] =  add(k, mul(k , k -1));

//     for(int i = 3; i<= n; i++){
//         dp[i] = add(mul(solvetab(i -2, k), k -1), mul(solvetab(i -1, k), k -1));
//     }

//     return dp[n];

// }



int numberOfWays(int n, int k){

    // vector<int> dp(n +1, -1 );

    // return solveMem(n,k , dp);

}

int main(){
    int n; cin>>n;
    int k; cin>>k;

    cout<<numberOfWays(n, k);


    return 0;
}