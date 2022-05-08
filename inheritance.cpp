#include<iostream>
using namespace std;

class Human{
    

    

    public:
    int height;

    int weight;

    private:

    int age;

    public:

    int getAge(){
        return this->age;
    }

    void setweight(int w){
        this->weight = w;
    }
};

class Male: private Human{

    public:

    string color;

    void sleep(){
        cout<<"male sleeping"<<endl;
    }

    int getHeight(){
        return this->height;
    }
};

int main(){
    


}