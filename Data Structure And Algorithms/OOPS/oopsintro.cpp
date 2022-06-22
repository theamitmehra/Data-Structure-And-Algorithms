#include<iostream>
using namespace std;

class Hero{       //class 

    public:  // specifier

    string name;         //data memeber
    char level;
    int health;


    Hero(){                 //constructor
        name = "Unknown";
        level = 'D';
        health = 50;
    }

    

    void print(){           //memeber function

        cout<<"Name: "<<name<<endl;
        cout<<"Level: "<<level<<endl;
        cout<<"health: "<<health<<endl;

    }

    ~Hero(){           //destructor
        cout<<"destructor is called"<<endl;
    }

};

int main(){
    Hero superman; //object

    superman.health= 90;
    superman.level = 'A';
    superman.name = "superman";


    superman.print();

    cout<<endl;

    Hero shaktiman;
    shaktiman.print();



    return 0;
}