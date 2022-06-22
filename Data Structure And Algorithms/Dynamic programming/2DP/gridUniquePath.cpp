// problem : given two values M and n , which represent a matrix [m][N] . we need to fin dthe total unique paths from  the top left cell(matrix [0][0]) to the rightmost cell (matrix[m-1][n-1]).
// at any cell we are allowed to move in only two direction :- bottom and right.

// example 

// recursive solution 
// #include<bits/stdc++.h>
// using namespace std;

// int countWays(int i, int j){
//     if(i == 0 && j == 0){
//         return 1;
//     }

//     if(i < 0 || j < 0){
//         return 0;
//     }

//     int up = countWays(i -1, j);
//     int left = countWays(i, j -1);

//     return up + left ;

// }



// int main(){
//     int m =3, n =2;

//     cout<<countWays(m,n)<<endl;
//     return 0;
// }

// recursion + memoization

// #include<bits/stdc++.h>
// using namespace std;

// int countWays(int i, int j, vector<vector<int>> &dp){
//     if(i == 0 && j == 0){
//         return 1;
//     }

//     if(i < 0 || j < 0){
//         return 0;
//     }

//     if(dp[i][j]  != -1) return dp[i][j];

//     int up = countWays(i -1, j, dp);
//     int left = countWays(i, j -1, dp);
    
//     return dp[i][j] = up + left;
// }



// int main(){
//     int m =3, n =2;

//     vector<vector<int>> dp(m, vector<int> (n, -1));
//     cout<<countWays(m-1,n-1,dp)<<endl;
//     return 0;
// }
// tabulation 
#include<bits/stdc++.h>
using namespace std;

int countWays(int i, int j){

    vector<vector<int>> dp(i, vector<int> (j, -1));
    dp[0][0] = 1;

    // if(i < 0 || j < 0){
    //     return 0;
    // }

    // if(dp[i][j]  != -1) return dp[i][j];

    // int up = countWays(i -1, j, dp);
    // int left = countWays(i, j -1, dp);
    
    // return dp[i][j] = up + left;

    for (int m = 1; i <= i; m++)
    {
        for (int n = 1; i < j; n++)
        {
            int up = countWays(i -1, j);
            int left = countWays(i, j -1);
            dp[m][n] = up + left;
        }
        
    }
    return dp[i][j];
}



int main(){
    int m =3, n =2;

    
    cout<<countWays(m,n)<<endl;
    return 0;
}