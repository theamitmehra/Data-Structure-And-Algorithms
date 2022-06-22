// #include<bits/stdc++.h>
// using namespace std;

// int func(int a){

//     if(a == 0 ){
//         return 0;
//     }
//     cout<<a<<endl;

//     return func(a -1);
// }

// int main(){
//     int a; cin>>a;

//     func(a);

//     return 0;
// }

/*
recursion types : 

head recursion : when processing comes before the recursive call
tail recursion : when recursive call comes before the processing



*/
// head recursion
// #include<bits/stdc++.h>
// using namespace std;

// int getfac(int n){
//     //base case 

//     if(n <= 1) return 1;

//     // recursive call 
//     int chotaAns = getfac(n -1);

//     // processing 
//     int Ans = n * chotaAns;

//     return Ans;
// }

// int main(){

//     int n; cin>>n;
//     cout<<getfac(n);

//     return 0;
// }

// tail recursion

// #include<bits/stdc++.h>
// using namespace std;

// void f(int n){
//     //base case

//     if(n == 0){
//         return;
//     } 

//     // processing 
//     cout<<n<<endl;

//     // recursive call 
//     return f(n -1);
// }

// int main(){

//     int n; cin>>n;
//     f(n);

//     return 0;
// }