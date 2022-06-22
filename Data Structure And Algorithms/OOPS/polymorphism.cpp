/*#include<iostream>
using namespace std;

class A{

    public:

    void sayhello(){

        cout<<"hello this is amit"<<endl;
    }

    int sayhello(char name){
        cout<<"hello this is amit"<<endl;
        return 1;
    }

    void sayhello(string name){
        cout<<"hello "<<name<<endl;

    }
};


class B{

    public:

    int a ;
    int b;

    public:

    int add(){

        return a+b;
    }

    void operator+ ( B &obj){
        cout<<"hello this is amit"<<endl;
    }

    void operator()(){
        cout<<"main bracket hu"<<endl;
    }

};



class Animal {
    public:

    void speak(){

        cout<<"Speaking "<<endl;
    }
};

class Dog: public Animal{

    public:

    void speak(){
        cout<<"BArking "<<endl;
    }
};

int main(){

Dog obj;
obj.speak();


}



#include<bits/stdc++.h>
using namespace std;

// runtime polymorphism: is acheived by funtion overloading and operator overloading

class Geeks{

    public:

    void func(int x){
        cout<< "value of x is "<<x<<endl;

    }

    //function with the same name diff perameter

    void func(double x)
    {
        cout<<"value of x is "<<x<<endl;

    }

    void func(int x , int y)
    {
        cout<<"value of x and y is :"<<x<< " "<<y<<endl;

    }
};

int main(){

Geeks g1;
g1.func(7);
g1.func(9.132);
g1.func(85, 66);

return 0;

}


*/
#include<iostream>

#include<bits/stdc++.h>
using namespace std;

//operator overloading

class complex{

    private:

    int real, imag;

    public:

    complex(int r = 0, int i = 0){
        real = r;
        imag = i;
    }


    complex operator + (complex const &obj)
    {
        complex res;

        res.real = real + obj.real;
        res.imag = imag + obj.imag;
        return  res;
    }

    void print(){cout<<real<<"+i"<<imag<<endl;}
};


int main(){
    
    complex c1(10, 5);
    complex c2(2, 4);

    complex c3(c1 +c2);

    c3.print();

    return 0;
}