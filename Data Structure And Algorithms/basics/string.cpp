#include<iostream>
#define ci cin
#define co cout
using namespace std;

char getlength(char name[]){

    int count =0;

    for(int i =0; name[i] != '\0'; i++){
        count++;

    }

    return count;
}

void reverse(char name[], int n){

    int s = 0;
    int e = n -1;

    while (s<e)
    {
        swap(name[s++], name[e--]);

    }


}
char toLowerCase(char ch){
    if (ch >= 'a' && ch <= 'z')
    {
        /* code */
        return ch;

    }else{
        char temp = ch -'A' + 'a';
        return temp;
    }
    
}
bool palindrome(char a[], int n){

    int s =0;
    int e = n -1;

    while (s<=e)
    {
        /* code */

        if (toLowerCase(a[s])!= toLowerCase(a[e]))
        {
            /* code */
            return 0;
        }
        else{
            s++;
            e--;
        }

        
    }
    return 1;
}
int main(){
    char name[20];
    co<<"enter your name : "; 
    ci>>name;

    int len = getlength(name);

    //name[2] = '\0';
/*
    co<<"your name is: ";
    co<<name<<endl;

    

    cout<<"length: "<<len<<endl;

    reverse(name, len);

    cout<<"your name is: ";
    cout<<name<<endl;

*/

co<<"palindrome or not "<< palindrome(name, len);

string s;

ci>>s;

co<<s<<endl;



}