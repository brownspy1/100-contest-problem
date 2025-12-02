// Circular Queue Simulation

// Created by M.Mahadi on 2025-12-02 Time:20-48-53
#include <bits/stdc++.h>
using namespace std;
class CircularQueue{
    private:
        int *array;
        int current;
        int front;
        int rear;
        int cap;
    public:
    CircularQueue(int v){
        array = new int[v];
        front = 0;
        rear =-1;
        cap = v;
        current = 0;
    }
    void push(int v){
        if (current == cap)
        {
            cout<<"Cq is full";
            return;
        }
        rear = (rear+1)%cap;
        array[rear] = v;
        current++;
    }

    void pop(){
        if (current == 0)
        {
            cout<<"Cq is empty";
            return;
        }
        front = (front+1)%cap;
        current --;
        
    }
    int fronts(){
        if (current == 0)
        {
            cout<<"Cq is empty";
            return 0;
        }
        return array[front];
    }
    int size(){
        return current;
    }
};
int main(){
    CircularQueue cq(3);
    cq.push(10);
    cq.push(20);
    cq.push(30);
    cq.pop();
    cq.push(40);

    for (int i = 0; i < cq.size(); i++)
    {
        cout<<cq.fronts()<<" ";
        cq.pop();
    }
    
    return 0;
}