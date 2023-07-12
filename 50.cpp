#include<bits/stdc++.h>
using namespace std;
class Stack
{
    int size;
    int *arr;
    int top;
    public:
        Stack(){
        top = -1;
        size = 1000;
        arr =new int[size];
        }
    void push(int x){
        top++;
        arr[top] = x;

    }
    int pop(){
        int x = arr[top];
        top = top-1;
        return x;
    }
    int Top(){
        int x = arr[top];
        return x;
    }
    int Size(){
        return top+1;
    }
};
int main(){
    Stack s;
    s.push(6);
    s.push(3);
    s.push(7);
    cout<<"Top of Stack before deleting element is"<<s.Top()<<endl;
    cout<<"Size of stack before deleting any element"<<s.Size()<<endl;
    cout<<"The element deleted is "<<s.pop()<<endl;
    cout<<"Size after deleting element"<<s.Size()<<endl;
    cout<<"Top after deleting element"<<s.Top()<<endl;
    return 0;
}
