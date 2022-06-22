#include<bits/stdc++.h>
using namespace std;


//solution using tabulation 
// time complexity and space complexity both are O(n)

// int solveTab(vector<int> &nums){
//      int n = nums.size();
//     vector<int> dp(n, 0);
    
//     dp[0] = nums[0];
    
//     for(int i =1; i<n; i++){
//         int incl = dp[i -2] + nums[i];
//         int excl = dp[i -1] + 0;
        
//         dp[i] = max(incl, excl);
//     }
    
//     return dp[n -1];
// }

//space optimization
// time complexity : O(n)
// space complexity : O(1)

int solveSpaceOpt(vector<int> &nums){
    int n = nums.size();

    int prev2 = 0;
    int prev1 = nums[0];

    for(int i = 1; i<n; i++){
        int incl = prev2 + nums[i];
        int excl = prev1 + 0;

        int ans = max(excl, incl);
        prev2 = prev1;
        prev1 = ans;
    }

    return prev1;
}


int solveTab(vector<int> &nums){
     int n = nums.size();
    vector<int> dp(n, 0);
    
    dp[0] = nums[0];
    
    for(int i =1; i<n; i++){
        int incl = dp[i -2] + nums[i];
        int excl = dp[i -1] + 0;
        
        dp[i] = max(incl, excl);
    }
    
    return dp[n -1];
}

int main(){

    vector<int> nums;
    int count; 
    cin>> count;

    for (int i = 0; i < count; i++)
    {
        int x; cin>> x;
        nums.push_back(x);
    }

    cout<<solveTab(nums);

    return 0;
    
}