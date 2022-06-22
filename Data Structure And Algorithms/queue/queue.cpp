// #include<iostream>

// using namespace std;

// class queue{
//     int *arr;
//     int qfront;
//     int rear;
//     int size;

//     public:

//     queue(){
//         size = 10;
//         arr = new int [size];
//         qfront = 0;
//         rear = 0;
//     }

//     bool isEmpty(){
//         if (qfront == rear)
//         {
//             return true;
//         }else{
//             return false;

//         }
        
//     }

//     void enqueue(int data){
//         if (rear == size)
//         {
//             cout<<"queue is full"<<endl;
//         }
//         else {
//             arr[rear] = data ;
//             rear++;
//         }
        
//     }

//     int dequeue(){
//         if (qfront== rear)
//         {
//             return -1;

//         }
//         else{
//             int ans = arr[qfront];
//             arr[qfront] = -1;
//             qfront++;
//             if (qfront == rear)
//             {
//                 qfront = 0;
//                 rear = 0;
//             }

//             return ans;
            

//         }
        
//     }


//     int front(){
//         if (qfront == rear)
//         {
//             return -1;
//         }

//         else{
//             return arr[qfront];
//         }
        
//     }

// };

// int main(){

//     queue* q = NULL;
//     q->enqueue(6);
//     q->enqueue(8);
//     q->enqueue(660);
//     q->enqueue(34);
//     q->enqueue(5);
//     q->enqueue(7);
//     q->enqueue(100);
//     q->enqueue(44);
//     q->enqueue(89);
//     q->enqueue(2);
//     q->enqueue(3);
//     q->enqueue(77);

//     return 0;
    


// }

//  queue stl:

// #include<bits/stdc++.h>
// using namespace std;

// int main(){

//     cout<< (-1) % 1<<endl;
//     deque<int> d;

//     d.push_front(12);
//     d.push_back(14);

//     cout<< d.front() <<endl;

//     cout<< d.back() <<endl;

//     d.pop_front();
//     cout<<d.front()<< endl;
//     cout<<d.back()<<endl;

//     d.pop_back();

//     if(d.empty()) {
//         cout << "queue is empty "<<endl;
//     }
//     else{
//         cout<<"queue is not empty"<<endl;
//     }



//     return 0;
// }