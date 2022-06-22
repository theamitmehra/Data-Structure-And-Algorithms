// // #include<bits/stdc++.h>
// // using namespace std;

// // dynamic programming : it is a optimisation technique to improve performance of the program by reducing time an dspacecomplexity.
// // types of dp : 1dp, 2dp

// // approaches in dyanmic programming
// // momoization
// // tabulation

// for learning we need to master recurssion

// // method 1
// int func(int n){
//     // base case
//     if(n == 1 || n == 0){
//         return n;
//     }

//     return func(n - 1) + func(n - 2);

// }

// // method 2 :

// int func2(int n, vector<int> dp){

//     if(n <= 1)
//     {
//         return n;
//     }

//     dp[n] = func2(n -1, dp) + func2(n -2, dp);

//     return dp[n];

// }

// // //method 3:

// int func3(int n ){
//     int a  = 0, b = 1, c, i;

//     if(n == 0){
//         return a;
//     }

//     for(i = 2, i<= n; i++;)
//     {
//         c = a + b ;
//         a = b;
//         b = c;
//     }
//     return b;
// }

// // int main(){

// //     int n; cin>>n;
// //     // vector<int> dp(n +1);
// //     // for(int i = 0 ; i <= n ; i++)
// //     // {
// //     //     dp[i] = -1;
// //     // }

// //     // cout<<"answer is : "<<func2(n, dp)<<endl;
// //     cout<<func3(n)<<endl;

//  //   // return 0;

// // }

// // Fibonacci Series using Space Optimized Method
// // #include<bits/stdc++.h>
// // using namespace std;

// // // Driver code
// // int main()
// // {
// // 	int n = 9;

// // 	cout << fib(n);
// // 	return 0;
// // }

// // This code is contributed by Code_Mech

#include <bits/stdc++.h>
using namespace std;

// using recursion

int recFib(int n)
{
	// base case

	if (n == 0 || n == 1)
	{
		return n;
	}

	// recurrance relation

	return recFib(n - 1) + recFib(n - 2);
}

// using dp top down approach

int dpFib1(int n, vector<int> dp)
{
	// base case

	if (n == 0 || n == 1)
	{
		return n;
	}

	dp[n] = dpFib1(n - 1, dp) + dpFib1(n - 2, dp);
	return dp[n];
}

// using dp bottom up approach

// int dpFib2(int n){

// }

// using dp with space optimisation

int fib(int n)
{
	int a = 0, b = 1, c, i;
	if (n == 0)
		return a;
	for (i = 2; i <= n; i++)
	{
		c = a + b;
		a = b;
		b = c;
	}
	return b;
}

int main()
{

	int m, n, p;
	cin >> m >> n >> p;

	cout << recFib(m) << endl;

	vector<int> dp(n + 1, -1);
	cout << dpFib1(n, dp) << endl;

	cout << fib(p) << endl;

	int a;
	cin >> a;

	int arr[a + 1];

	arr[1] = 1;
	arr[0] = 0;

	for (int i = 2; i <= a; i++)
	{
		arr[i] = arr[i - 1] + arr[i - 2];
	}

	cout << arr[a] << endl;

	return 0;
}

/*
properties of Dp problem
1) overlapping subproblems: it contains overlapping subproblems




2) optimal substructure : A given problem  have a optimal substructure property if optimal solution arecan be obtained using optimal solution of its.


BITMASKING:-




*/