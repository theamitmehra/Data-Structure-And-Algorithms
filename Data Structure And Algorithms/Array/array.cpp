#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int, int> pi;
typedef vector<int> vi;
typedef vector<vi> vii;

double EPS = 1e-9l;
int INF = 1000000005;

#define forr(i, a, n) for(int i = a; i < n; i++)
#define forn(i, a, n) for(int i = a; i <= n; i++ )
#define ford(i, a, n) for(int i = a; i >= n; i--)

#define mp make_pair
#define pb push_back
#define all(v) v.begin(), v.end()
#define tc(t)  while(t--)


int maxConsecutiveOnes(int *arr){

    int maxct = 0; int count =0;
    int n = sizeof(arr);

    forr(i, 0, n){
        if(arr[i] == 1){
            count++;
        }
        else if(arr[i] == 0){
            maxct = max(maxct, count);
            count = 0;
        }
    }
    maxct= max(maxct, count);
    return maxct;
}

int main()
{
    
    int arr[] = {1, 0, 1, 1, 1, 0 , 1};

    // int count = 5;

    // forr(i, 0, count){
    //     cout<<arr[i]<<endl;
    // }
    cout<<maxConsecutiveOnes(arr);

    return 0;
}