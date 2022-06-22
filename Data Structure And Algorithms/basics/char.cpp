#include <bits/stdc++.h>
using namespace std;

char* reverse(char *a, int n)
{
    int s = 0, e = n - 1;

    while (s < e)
    {
        swap(a[s++], a[e--]);
    }
    return a;
}

int getlenth(char *name)
{
    int count = 0;

    for (int i = 0; name[i] != '\0'; i++)
    {

        count++;
    }
    return count;
}

// void swap(int a, int b)
// { // pass by value

//     int t = a;
//     a = b;
//     b = t;
// }

// int square(int *x)
// {
//     // pass by address

//     return (*x) * (*x);
// }

// int increment(int &x){

//     //pass by reference

//     return x++;
// }

char toLowerCase(char ch){

    if(ch >= 'a' && ch <= 'z'){

        return ch;
    }

    else{

        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){

    int s = 0;
    int e = n -1;

    while (s <= e)
    {
        if(toLowerCase(a[s]) != toLowerCase(a[e]))
        {
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

char getmaxocc(string s){

    int arr[26] = {0};

    for(int i = 0; i < s.length(); i++)
    {
        char ch = s[i];

        int number =0;

        number = ch -'a';
        arr[number]++;
    }

    int maxi = -1;
    int ans = 0;

    for(int i =0; i<26; i++)
    {
        if(arr[maxi] < arr[i])
        {
            ans = i;
            maxi = arr[i];
        }
    }
    return 'a'+ ans;
}

int removeElement(vector<int>& nums, int val) {
        
            int s = nums.size();
            int count =0;
            for(int i =0; i < s; i++ ){
                    if(nums [i] == val){
                            nums.erase(nums.begin() + (i -1));
                    }
                    
                    else{
                            count++;
                    }
            }
            
            return count;
    }

int main(int argc, char **argv, char **envp)
{

    // char a[10];

    // cin >> a;

    // // cout<<getlenth(a);

    // int len = getlenth(a);

    // char *rev = reverse(a, len);

    // cout<<rev<<endl;

    // if(checkPalindrome(a, len)){
    //     cout<<"yes"<<endl;
    // }
    // else{
    //     cout<<"no"<<endl;
    // }

    // string s;

    // cin >> s;

    // cout<< getmaxocc(s)<<endl;


    




    return 0;
}


