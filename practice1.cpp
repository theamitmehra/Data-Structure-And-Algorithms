// #include <bits/stdc++.h>
// using namespace std;

// // long fact(int n)
// // {

// //     long result;

// //     if (n == 0)
// //         result = 1;

// //     else
// //     {
// //         result = 1;

// //         for (int i = 2; i <= n; i++)
// //         {
// //             result = result * i;
// //         }
// //     }
// //     return result;
// // }

// // void swap(int x, int y){

// //     int t;

// //     t = x;
// //     x = y;
// //     y = t;

// // }

// void bubbleSort(int *a, int size)
// {

//     for (int i = 0; i < size - 1; i++)
//     {

//         for (int j = 0; j < size - 1; j++)
//         {
//             if (a[j] > a[j + 1])
//             {
//                 swap(a[j], a[j + 1]);
//             }
//         }
//     }
// }

// int main()
// {

//     // int n;
//     // // cout << "Enter a number whose factorial is to be found : ";

//     // cin >> n;

//     // cout << "the factorial of " << n << " is " << fact(n) << endl;

//     // int a = 5;
//     // int b = 6;

//     // swap(a, b);

//     // int a[5];
//     // int count = 5;
//     // for (int i = 0; i < count; i++)
//     // {
//     //     cin >> a[i];
//     // }

//     // bubbleSort(a, count);

//     // for (int i = 0; i < count; i++)
//     // {
//     //     cout << a[i] << " ";
//     // }

//     // cout << endl;

//     return 0;
// }


// #define count = n
// void printcount(void){

//     static int count = 1;

//     cout<<"count = "<<count<<endl;

//     count++;

// }
// int main(){

//     printcount();
//     printcount();
//     printcount();

// }

// int main(int argc, char *argv[] ){

//     int i ;
//     cout<<"argument count = "<<argc;

//     cout<<endl<<"program name = "<<argv[0];

//     cout<<endl<< "argument vectors are:"<<endl;

//     for (int i = 0; i < argc; i++)
//     {
//         cout<<argv[i]<<endl;

//     }

//     // cout<<argv[0]<<endl;
//     // cout<<argv[1]<<endl;

// }

// int main(int argc, char **argv, char **envp)
// {

//     cout << "the number of command line argument is : " << argc << endl;

//     cout << "the command line argument are as follows " << endl;

//     for (int i = 0; i < argc; i++)
//     {

//         cout << "argv[" << i << "]: " << argv[i] << endl;
//     }

//     cout << "the environment variables : " << endl;

//     int i = 0;

//     while (*envp[i])
//     {
//         cout << envp[i++] << endl;
//     }
//     return 0;
// }

// int main(int argc, char **argv, char **envp)
// {

//     // cout<<"syntax of main function"<<endl;

//     map<int, string> m;

//     m[1] = "abc";
//     m[2] = "def";
//     m[3] = "pqr";

//     m.insert({4, "xyz"}); // tc : o(logn);

//     // map<int, string> ::iterator it;

//     // for(it = m.begin(); it != m.end(); ++it){

//     //     cout<<it->first<<" "<<it->second<<endl;
//     // }

//     m.erase(m.begin());
//     for (auto it : m)
//     {
//         cout << it.first << " " << it.second << endl;
//     }

//     return 0;
// }

// map
// we cant used it+1


// #include<bits/stdc++.h>
// using namespace std;

// #define ASCII_SIZE 256

// char getMax(char *str){

//     int count[ASCII_SIZE] = {0};

//     int len = strlen(str);

//     int max = 0;

//     char result;

//     for (int i = 0; i < len; i++)
//     {
//         count[str[i]]++;

//         if(max <count[str[i]]){
//             max = count[str[i]];
//             result = str[i];
//         }
//     }
//     return result;
// }

// int main(){

// 	char str[100];

// 	cin>>str;
    
//     char ans = getMax(str);

// 	if(ans == 'N')
// 	{
// 		cout<<"Nutan"<<endl;
// 	}
// 	else{
// 		cout<<"Tulsa"<<endl;
// 	}

//     return 0;
// }








// #include <bits/stdc++.h> // header file includes every Standard library
// using namespace std;

// int main() {

// 	// Your code here

// 	int a[2];
// 	for(int i =0; i<2; i++){
// 		cin>>a[i];
// 	}

// 	int ff; cin>>ff;

// 	int ss; cin>>ss;

// 	int ans = (a[0] -1)*ff*ss;

// 	cout<<ans;

// 	return 0;
// }

#include <bits/stdc++.h> // header file includes every Standard library
using namespace std;
int main() {

	// Your code here
	// int q; cin>>q;
    // int n =2;

	// int arr[n][n] = {0};

	// for(int i = 0 ; i<n; i++){
	// 	for(int j = 0 ; j<n; j++)
	// 	{
            
	// 		int num; cin>>num;
    //         if(num == '\n'){
    //             break;
    //         }
	// 		arr[i][j] = num;
	// 	}
	// }

    int L;
    char C;
 
    // Initialize the empty string
    // for concatenation
    string str = "";
 
    // Input the specific length and
    // character of string
    cin >> L;
    cin >> C;
 
    // Run the for loop L times
    for (int i = 0; i < L; i++)
        str = str + C;
 
    // Output the result string
    cout << str;

	return 0;
}

