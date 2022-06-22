#include<bits/stdc++.h>
using namespace std;

int main(){

    // there are two type of hashmap;
    // 1. map
    // 2. unordered_map

    unordered_map<string, int> m;

    m["geeksforgeeks"] = 10;
    m["Amit"] = 20;
    m["contribute"] = 30;


    for(auto x : m){
        cout<< x.first<<" "<<x.second<<endl;

    }

    map<int, string> mp;
    mp[1] = "Amit";
    mp[2] = "mehra";

    for (auto i: mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }
    return 0;

}