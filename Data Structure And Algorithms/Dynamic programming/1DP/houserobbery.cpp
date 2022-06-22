// solution : 


#include<bits/stdc++.h>
using namespace std;


int solveTab(vector<int> &nums){
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

int houseRobber(vector<int>& valueInHouse)
{
    int n = valueInHouse.size();

    if(n == 1)
    return valueInHouse[0];

    vector<int> first, second;
    for (int i = 0; i < n; i++)
    {
        if(i != n -1){
            first.push_back(valueInHouse[i]);
        }

        if(i != 0){
            second.push_back(valueInHouse[i]);
        }
    }

    return max(solveTab(first), solveTab(second));
    
}


int main(){

int n; cin>>n;
vector<int> a;

for(int i =0; i<n; i++)
{
    int x; cin>>x;
    a.push_back(x);
}

cout<<"answer "<<houseRobber(a);

return 0;

}