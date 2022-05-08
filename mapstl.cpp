#include<iostream>
#include<map>
#define co cout
#define ci cin
#define l endl

using namespace std;

int main(){

    map<int, string> m;

    m[1] = "tony";
    m[13] = "stark";
    m[2] = "ironman";

    m.insert({5, "avenger"});

    co<<"before erase"<<endl;

    for(auto i: m){
        co<<i.first<<" "<<i.second<<l;

    }
    co<<l;
    co<<"finding 13 "<<m.count(13)<<l;

    auto it = m.find(5);

    for (auto i = it; i != m.end(); i++)
    {
        co<<(*i).first<<" "<< (*i).second<<endl;
    }


    



}