// #include<iostream>
// using namespace std;



// void merge(int *arr, int s, int e){

//     int mid = (s + e) / 2;

//     int len1 = mid - s +1;
//     int len2 = e - mid;

//     int *first = new int [len1];
//     int *second = new int [len2];

//     int mainArrayidx = s;

//     for (int i = 0; i < len1; i++)
//     {
//         first[i] = arr[mainArrayidx++];
//     }

//     for (int i = 0; i < len2; i++)
//     {
//         second[ i] = arr[mainArrayidx++];

//     }

//     int idx1 = 0;
//     int idx2 = 0;

//     mainArrayidx = s;

//     while (idx1 <len1 && idx2 < len2)
//     {
//         if (first[idx1]< arr[mainArrayidx])
//         {
//             arr[mainArrayidx++] = first[idx1++];

//         }
//         else{
//             arr[mainArrayidx++] = second[idx2++];
//         }
        
//     }
    
//     while (idx1 <len1){
//         arr[mainArrayidx++] = first[idx1++];
//     }


//     while (idx2 < len2)
//     {
//         arr[mainArrayidx++] = second[idx2++];
//     }
    
    
    
//     delete []first;
//     delete []second;
// }


// void mergesort(int *arr, int s, int e){

//     if (s >= e)
//     {
//         return ;
//         /* code */
//     }

//     int mid = (s + e)/ 2;

//     mergesort(arr, s , mid);
//     mergesort(arr, mid+1, e);

//     merge(arr, s, e);

    
// }


// /*
// void merge(int *arr, int s, int e){

//     int mid = (s +e)/2;

//     int len1 = mid -s +1;
//     int len2 = e - mid;

//     //dynamic array

//     int *first = new int[len1];
//     int *second = new int[len2];

//     int mainArrayidx = s;

//     //copy values

//     for (int i = 0; i < len1; i++)
//     {

//         first[i] = arr[mainArrayidx++];

//     }

//     for (int i = 0; i < len2; i++)
//     {
//         second[i] = arr[mainArrayidx++];
//     }

//     //merge two sorted array 

//     int idx1 = 0;
//     int idx2 = 0;
//     mainArrayidx =s;

//     while(idx1 <len1 && idx2 <len2){

//         if (first[idx1] < second[idx2])
//         {
//             arr[mainArrayidx++] = first[idx1++];
//         }
//         else{
//             arr[mainArrayidx++] = second[idx2++];
//         }
        
//     }

//     while(idx1 <len1){
//          arr[mainArrayidx++] = first[idx1++];
//     }
//     while(idx2 <len2){
//         arr[mainArrayidx++] = second[idx2++];

//     }
    

//     delete []first;
//     delete []second;
// }

// void mergesort(int *arr, int s, int e){

//     //base case

//     if(s >= e){
//         return ;

//     }

//     int mid =( s+e)/2;

//     mergesort(arr, s, mid);
//     mergesort(arr, mid+1, e);

//     merge(arr, s, e);


// }*/



// int main(){

// // int arr[9] = {5 ,6, 4, 8, 1, 3, 9, 7, 11};

// // mergesort(arr, 0, 8);

// // for (int i = 0; i < 9; i++)
// // {
// //     cout<<arr[i]<< " ";
// // }
// // cout<<endl;
    
// //     return 0;
// // }
#include<bits/stdc++.h>
#include<functional>
#include<string>

using namespace std;

// int r(){
//     static int num = 7;
// //     return num--;
// // }

// stack<int> reverseTheGroups(stack<int> &s, int n, int k) {
//     int arr[n];
    
//     for(int i = n-1; i >=0; i-- ){
//         arr[i] = s.top();
//         s.pop();
//     }
    
//     for(int i = 0; i<n; i+2){
//         swap(arr[i], arr[i+1]);
//     }
    
//     for(int i =0; i<n; i++){
//         s.push(arr[i]);
//     }
    
//     return s;
    
// }

// vector<int> solve(vector<int> &a, vector<int> &b, int n){

//     vector<int> v;
//     for (int i = 0; i < n; i++)
//     {
//         for(int j = 0; j< n; j++)

//         {
//             if(a[i] == b[j]){
//                 v.push_back(j+1);
//             }

//         }
//     }
    
//     return v;
// }


// int kuchbhi(int &x){

//     return ++x;
// }



// int main(){


    // char n1[] = "test";
    // char n2[] = "test";

    // string s1 (n1);
    // string s2 (n2);

    // hash<char*> ptr_hash;
    // hash<string> str_hash;

    // cout<<"same hashes:\n"<<boolalpha;
    // cout<<"n1 and n2 "<< (ptr_hash(n1)) <<" "<<ptr_hash(n2)<<"\n";
    // cout<<"n1 and n2 "<<(str_hash(n1))<<" "<< str_hash(n2)<<"\n";

// char a  = 'h';
// char b = 'b';

// hash<char> h1;
// cout<< h1(a) <<endl;
// cout<< h1(b)<<endl;


// int arr[] = {1, 2, 3, 4, 5,6,7,8,9,0,1,2,5};

// int *ip = arr + 4;
// // printf("%d\n",  ip);
// // cout<<arr <<endl;
// cout<<*(arr + 0)<<endl;  //1
// cout<<*(arr + 1)<<endl;  //2
// cout<<*(arr +2)<<endl;   //3
// cout<<*(arr +3)<<endl;   //4
// cout<<*(arr +4)<<endl;   //5

// cout<<"\n";

// cout<< *ip<<endl;
// cout<< ip[0]<<endl;
// cout<< ip[1]<<endl;
// cout<< ip[2]<<endl;
// cout<< ip[3]<<endl;



// static int a =7;

// // a--;
// cout<<a<<endl;




// for(r(); r(); r()){

//     cout<<r();
// }




// vector<int> v;

// v.push_back(3);
// v.push_back(2);
// v.push_back(1);
// v.push_back(5);
// v.push_back(4);
// v.push_back(6);

// for(int i:v){
//     cout<<i<<" ";
// }

// sort(v.begin(), v.end());


// for(int i:v){
//     cout<<i<<" ";
// }

// float sum =  0.0, j = 1.0, i = 2.0;
// while (i/j > 0.0625)
// {
//     j = j +j;
//     sum = sum +i;
//     cout<<sum<<endl;
// }

// priority_queue<int, vector<int>, greater<int>> p;
// int k ;
// for(int i = 0; i < k; i++)
// {
//     p.push(v[i]);
// }
// int n = v.size();
// for(int i = k; i<n; i++){


// }

// sort(v.begin(), v.end());
// for ( int i:v)
// {
//     cout<<i<<" ";
// }

// stack<int> s;
// s.push(1);
// s.push(2);
// s.push(3);
// s.push(4);
// s.push(5);
// s.push(6);

// // reverseTheGroups(s, 6, 2);
// // for(int i)
// vector<int> a;
// vector<int> b;

// a.push_back(1);
// a.push_back(2);
// a.push_back(3);

// b.push_back(3);
// b.push_back(2);
// b.push_back(1);

// vector<int> sol = solve(a, b, 3);

// for(auto i: sol){
//     cout<<i<<" ";
// }

// int x = 9;
// cout<<kuchbhi(x)<<endl;

// cout<<x;

// int arr[5] = {1, 5, 4, 5, 1};

// set<int> s;

// for (int i = 0; i < 5; i++)
// {
//     s.insert(arr[i]);
// }

// for (auto i:s)

// {
//     cout<<i<<" ";
// }




// return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int32_t main()
{
    



    
}