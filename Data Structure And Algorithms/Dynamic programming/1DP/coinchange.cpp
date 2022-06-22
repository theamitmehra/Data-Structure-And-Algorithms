#include<bits/stdc++.h>
using namespace std;

int coins[ ] = {1, 2, 3};
int numberOfCoins = 3, sum = 4;


int solve(int s, int i){
    if(numberOfCoins == 0 || s > sum || i >= numberOfCoins)
    return 0;

    else if(s == sum){
        return 1;
    }

    return solve(s + coins[i], i) + solve(s, i+1);

}

int32_t main(){

// printf("total solution : %d", solve(0, 0 ));

string str = "123";
int num = stoi(str);
// cout<<num;

cout<<str[0]<<endl;

return 0;
}


// coin change is an extreamly imp problem of dynamic programming
