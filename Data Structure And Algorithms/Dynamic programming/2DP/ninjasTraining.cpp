// this is 2dp based problem

#include <bits/stdc++.h>
using namespace std;

int f(int day, int last, vector<vector<int>> &points, vector<vector<int>> &dp)
{

    // base case

    if (day == 0)
    {
        int maxi = 0;
        for (int i = 0; i <= 2; i++)
        {
            maxi = max(maxi, points[0][i]);
        }

        return dp[day][last] = maxi;
    }

    // use of memoization

    if (dp[day][last] != -1)
    {
        return dp[day][last];
    }

    // storing and returning the ans
    int maxi = 0;
    for (int i = 0; i <= 2; i++)
    {
        if (i != last)
        {
            int activity = points[day][i] + f(day - 1, i, points, dp);
            maxi = max(maxi, activity);
        }
    }
    return dp[day][last] = maxi;
}

int ninjasTraining(int n, vector<vector<int>> &points)
{
    // use of 2d dp

    vector<vector<int>> dp(n, vector<int>(4, -1));

    return f(n - 1, 3, points, dp);
}

int main()
{

    vector<vector<int>> points = {{10, 40, 70}, {20, 50, 80}, {30, 60, 90}};

    int n = points.size();

    cout << ninjasTraining(n, points);

    return 0;
}