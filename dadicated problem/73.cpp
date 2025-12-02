// // Created by @brownspy1 on 2025-12-01 Time:23-34-54
// #include <bits/stdc++.h>
// using namespace std;
// #define fast ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
// #define yes cout<<"YES"<<endl;
// #define no cout<<"NO"<<endl;
// #define cyes cout<<"Yes"<<endl;
// #define cno cout<<"No"<<endl;
// #define ll long long
// #define all(x) x.begin(), x.end()
// class Myqueue{
//     public:
//         list<int> myList;
//     void push(int v){
//         myList.push_back(v);
//     }
//     void pop(){
//         myList.pop_front();
//     }
//     int front(){
//         return myList.front();
//     }
//     int size(){
//         return myList.size();
//     }
//     bool isEmpty(){
//         return myList.empty();
//     }
// };

// int main(){
//     fast
//     Myqueue q;
//     int n;
//     while (cin>>n)
//     {
//         q.push(n);
//     }
//     int x = q.size();
//     for (int i = 0; i <x; i++)
//     {
//         cout<<q.front()<<" ";
//         q.pop();
//     }

//     return 0;
// }

// // NOTE: https://youtu.be/4mKKolshFD0?si=rYJjMzO8RcJyr330

// Created by @brownspy1 on 2025-12-02 Time:01-48-29
#include <bits/stdc++.h>
using namespace std;
#define fast                     \
    ios::sync_with_stdio(false); \
    cin.tie(nullptr);            \
    cout.tie(nullptr);
#define yes cout << "YES" << endl;
#define no cout << "NO" << endl;
#define cyes cout << "Yes" << endl;
#define cno cout << "No" << endl;
#define ll long long
#define all(x) x.begin(), x.end()

class CircularQueue
{
private:
    int *array;
    int font, rear, current_size, cap;

public:
    CircularQueue(int v)
    {
        cap = v;
        array = new int[v];
        font = 0;
        rear = -1;
        current_size = 0;
    }

    void push(int vl)
    {
        if (current_size == cap)
        {
            cout << "Cq is full\n";
            return;
        }
        rear = (rear + 1) % cap;
        array[rear] = vl;
        current_size++;
    }
    bool empty()
    {
        return current_size == 0;
    }
    void pop()
    {
        if (empty())
        {
            cout << "CQ is empty";
            return;
        }
        font = (font + 1) % cap;
        current_size--;
    }
    int front()
    {
        return array[font];
    }
    ~CircularQueue(){
        delete[] array;
    }
};
int main()
{
    fast
    CircularQueue cq(3);
     int n;
     while (cin>>n)
     {
        cq.push(n);
     }

     while (!cq.empty())
     {
        cout<<cq.front()<<" ";
        cq.pop();
     }
     
    return 0;
}